#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Return values.
#define S21_TRUE 1
#define S21_FALSE 0

// Return values for arithmetic functions.
#define CORRECT_RETURN 0
#define INFINITY_ERROR 1
#define MINUS_INFINITY_ERROR 2
#define ZERO_DIVISION_ERROR 3
#define INCORRECT_INPUT 4

// Structure for bit[3].
#define BEFORE_EXP_LEN 16
#define EXP_LEN 8
#define AFTER_EXP_LEN 7
#define SIGN_LEN 1

// Min/max values.
#define MAX_EXP 28
#define MIN_EXP 0
#define DEC_STR_LEN 32
#define STR_SIZE 1024
#define S21_BIT_SEQUENCE_SIZE 96

// Structures.
typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[6];
} s21_buffer;

typedef enum {
  S21_NORMAL,
  S21_PLUS_INF,
  S21_MINUS_INF,
  S21_NAN
} arithmetic_status_code;

typedef enum { S21_OK, S21_ERROR } status_code;

// Some defines.
//#define DEBUG
#define INT_BIT_LEN sizeof(int) * 8
#define BITS_IN_BUF sizeof(s21_buffer) * 8
#define BITS_IN_DEC sizeof(s21_decimal) * 8
#define INT_3_LEN sizeof(int) * 3
#define INT_6_LEN sizeof(int) * 6
#define S21_BUFFER_10     \
  {                       \
    { 10, 0, 0, 0, 0, 0 } \
  }

// Macro functions.
#define GET_FIRST_BIT(val) \
  (((val) & (1 << (INT_BIT_LEN - 1))) >> (INT_BIT_LEN - 1))
#define GET_LAST_BIT(val) ((val)&1)

// Arithmetic.
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// Comparison.
int s21_is_less(s21_decimal, s21_decimal);
int s21_is_less_or_equal(s21_decimal, s21_decimal);
int s21_is_greater(s21_decimal, s21_decimal);
int s21_is_greater_or_equal(s21_decimal, s21_decimal);
int s21_is_equal(s21_decimal, s21_decimal);
int s21_is_not_equal(s21_decimal, s21_decimal);
int s21_is_zero(s21_decimal value);

// Converters.
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_decimal_to_string(s21_decimal value, char *string);
int s21_from_string_to_decimal(s21_decimal *value, char *string);

// Other functions.
int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

// Additional functions for exponent and sign.
unsigned int s21_get_exponent(s21_decimal value);
void s21_set_exponent(s21_decimal *value, unsigned int exponent);
int s21_get_sign(s21_decimal value);
void s21_set_sign(s21_decimal *value, int sign);

// Normalization of two numbers.
int s21_normalize(s21_decimal *value_1, s21_decimal *value_2);

int s21_get_bit(s21_decimal value, int position);
void s21_set_bit_one(s21_decimal *value, int position);
void s21_set_bit_zero(s21_decimal *value, int position);
void s21_set_bit(s21_decimal *value, int position, int bit);

// Additional functions for moving/changing bits.
unsigned int s21_buffer_shift_bit(s21_buffer *value);
unsigned int s21_buffer_get_bit(s21_buffer value, unsigned int position);
int s21_buffer_set_bit(s21_buffer *value, unsigned int position,
                       unsigned int bit);  // TODO ask to move in s21_setters.c
int s21_decimal_shift_left(s21_decimal *less_dec, unsigned int shift);
int s21_decimal_shift_right(s21_decimal *great_dec, unsigned int shift);
int s21_buffer_set_zeros(
    s21_buffer *value);  // TODO ask to move in s21_setters.c
void s21_copy_decimal_in_buffer(s21_decimal src, s21_buffer *dst);
void s21_copy_buffer_in_decimal(s21_buffer src, s21_decimal *dst);

// Additional functions for bit arithmetic.
int s21_buffer_divide_10(s21_buffer *value);
int s21_buffer_is_mod_10(s21_buffer *value);
int s21_buffer_multiply(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result);
int s21_buffer_sum_bits(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result);
int s21_buffer_sub_bits(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result);
int s21_buffer_is_overflow(s21_buffer value);
int s21_buffer_can_mult_10(s21_buffer value);
int s21_decimal_shift_left(s21_decimal *less_dec, unsigned int shift);
int s21_decimal_shift_right(s21_decimal *great_dec, unsigned int shift);
int s21_buffer_is_greater(s21_buffer value_1, s21_buffer value_2);
void s21_set_decimal_zero(s21_decimal *value);
void s21_buffer_divide_bits(s21_buffer value_1, s21_buffer value_2,
                            s21_buffer *result);
int s21_buffer_is_zero(s21_buffer value);
int s21_buffer_divide_10_no_round(s21_buffer *value);

// Utils.
void s21_delete_zeros(char *str);
void *s21_insert(const char *src, const char *str, size_t start_index);
int find_unmatch(const char *src, const char *trim_chars, int i);
int s21_decimal_string_sum(char *val1, char *val2, char *res);
void s21_decimal_string_format(char *dest, int sign, int dot_place);
int s21_string_devide_2(char *string_1, char *string_2);

#endif
