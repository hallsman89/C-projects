#include "s21_decimal.h"

// Additional functions for output.
void s21_decimal_output_bits(s21_decimal value);
void s21_buffer_output_bits(s21_buffer value);

#define GREEN "\033[0;32m"
#define NO_COLOR "\033[0m"

#define MAX_DEC 7.92281625142643375935439503351e28
#define MIN_DEC 1e-28
#define OK 0

// // Test sub.
// int main(void) {
//   s21_decimal val_1, val_2, origin;
//   // val_1 = -0.77545545454546589781;
//   // val_2 = 87894515154546456456;

//   val_1.bits[0] = 0b10101100001010000001100001010101;
//   val_1.bits[1] = 0b00110100001010010001111010111100;
//   val_1.bits[2] = 0b00000000000000000000000000000100;
//   val_1.bits[3] = 0b10000000000101000000000000000000;

//   val_2.bits[0] = 0b00010011111011011111011110001000;
//   val_2.bits[1] = 0b11000011110010000000101111011001;
//   val_2.bits[2] = 0b00000000000000000000000000000100;
//   val_2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal res = {{0, 0, 0, 0}};
//   s21_sub(val_1, val_2, &res);

//   origin.bits[0] = 0b10111000010101011100100001001001;
//   origin.bits[1] = 0b01100110100011011000001100010111;
//   origin.bits[2] = 0b00011100011001100111011011000001;
//   origin.bits[3] = 0b10000000000010000000000000000000;
//   printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR,
//          s21_sub(val_1, val_2, &res));
//   printf("\n%sBit representaion%s:\n", GREEN, NO_COLOR);
//   s21_decimal_output_bits(val_1);
//   s21_decimal_output_bits(val_2);
//   s21_decimal_output_bits(res);
//   printf("\n%sString representaion%s:\n", GREEN, NO_COLOR);
//   char string[DEC_STR_LEN + 1] = {0};
//   s21_from_decimal_to_string(val_1, string);
//   printf("  %s\n", string);
//   s21_from_decimal_to_string(val_2, string);
//   printf("- %s\n", string);
//   printf("===\n");
//   s21_from_decimal_to_string(res, string);
//   printf("res: %s\n\n", string);
//   printf("Compare:\n");
//   s21_decimal_output_bits(origin);
//   s21_from_decimal_to_string(origin, string);
//   printf("  %s\n", string);
// }

/*
// Test add.
int main(void)
{
    s21_decimal val_1 = {{0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0<<16|1<<31}};
    s21_decimal val_2 = {{0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0<<16|0<<31}};
    s21_decimal res = {{0}};
    printf("\nReturn value: %d\n",s21_add(val_1, val_2, &res));
    printf("\nBit representaion:\n");
    s21_decimal_output_bits(val_1);
    s21_decimal_output_bits(val_2);
    s21_decimal_output_bits(res);
    printf("\nString representaion:\n");
    char string[DEC_STR_LEN+1] = {0};
    s21_from_decimal_to_string(val_1,string);
    printf("  %s\n", string);
    s21_from_decimal_to_string(val_2,string);
    printf("+ %s\n", string);
    printf("===\n");
    s21_from_decimal_to_string(res,string);
    printf("res: %s\n\n", string);
}
*/

/*
// Test mul.
int main(void)
{
    s21_decimal val_1 = {{1,1,1,0<<16|0<<31}};
    s21_decimal val_2 = {{1,0,0,28<<16|1<<31}};
    s21_decimal res = {{0}};
    printf("\n%sReturn value%s: %d\n",GREEN,NO_COLOR,s21_mul(val_1, val_2,
&res)); printf("\n%sBit representaion%s:\n",GREEN,NO_COLOR);
    s21_decimal_output_bits(val_1);
    s21_decimal_output_bits(val_2);
    s21_decimal_output_bits(res);
    printf("\n%sString representaion%s:\n",GREEN,NO_COLOR);
    char string[DEC_STR_LEN+1] = {0};
    s21_from_decimal_to_string(val_1,string);
    printf("  %s\n", string);
    s21_from_decimal_to_string(val_2,string);
    printf("* %s\n", string);
    printf("===\n");
    s21_from_decimal_to_string(res,string);
    printf("res: %s\n\n", string);
}
*/

// // Test round.
// int main(void) {
//   s21_decimal dec1;
//   dec1.bits[0] = 0b00000000000000000000000010100101;  // -16.5
//   dec1.bits[1] = 0b00000000000000000000000000000000;
//   dec1.bits[2] = 0b00000000000000000000000000000000;
//   dec1.bits[3] = 0b10000000000000010000000000000000;
//   s21_decimal res;
//   res.bits[0] = 0b00000000000000000000000000010000;
//   res.bits[1] = 0b00000000000000000000000000000000;
//   res.bits[2] = 0b00000000000000000000000000000000;
//   res.bits[3] = 0b10000000000000000000000000000000;
//   s21_decimal res1;
//   printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR, s21_round(dec1,
//   &res1)); printf("\n%sBit representaion%s:\n", GREEN, NO_COLOR);
//   s21_decimal_output_bits(dec1);
//   s21_decimal_output_bits(res1);
//   printf("\n%sString representaion%s:\n", GREEN, NO_COLOR);
//   char string[DEC_STR_LEN + 1] = {0};
//   s21_from_decimal_to_string(dec1, string);
//   printf("  %s\n", string);
//   printf("  rounding...\n");
//   printf("===\n");
//   s21_from_decimal_to_string(res1, string);
//   printf("res: %s\n\n", string);
//   s21_from_decimal_to_string(res, string);
//   printf("should be: %s\n\n", string);
// }

/*
// Test truncate.
int main(void)
{
    s21_decimal val_1 = {{1,1,1,3<<16|1<<31}};
    s21_decimal res = {{0}};
    printf("\n%sReturn value%s: %d\n",GREEN,NO_COLOR,s21_truncate(val_1, &res));
    printf("\n%sBit representaion%s:\n",GREEN,NO_COLOR);
    s21_decimal_output_bits(val_1);
    s21_decimal_output_bits(res);
    printf("\n%sString representaion%s:\n",GREEN,NO_COLOR);
    char string[DEC_STR_LEN+1] = {0};
    s21_from_decimal_to_string(val_1,string);
    printf("  %s\n", string);
    printf("  truncating...\n");
    printf("===\n");
    s21_from_decimal_to_string(res,string);
    printf("res: %s\n\n", string);
}
*/

/*
// Test floor.
int main(void)
{
    s21_decimal val_1 = {{1,1,1,2<<16|0<<31}};
    s21_decimal res = {{0}};
    printf("\n%sReturn value%s: %d\n",GREEN,NO_COLOR,s21_floor(val_1, &res));
    printf("\n%sBit representaion%s:\n",GREEN,NO_COLOR);
    s21_decimal_output_bits(val_1);
    s21_decimal_output_bits(res);
    printf("\n%sString representaion%s:\n",GREEN,NO_COLOR);
    char string[DEC_STR_LEN+1] = {0};
    s21_from_decimal_to_string(val_1,string);
    printf("  %s\n", string);
    printf("  flooring...\n");
    printf("===\n");
    s21_from_decimal_to_string(res,string);
    printf("res: %s\n\n", string);
}
*/

// Test float to dec.
int main(void) {
  s21_decimal val_1 = {0};
  float value = 1.2e-23;
  printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR,
         s21_from_float_to_decimal(value, &val_1));
  printf("\n%sBit representaion%s:\n", GREEN, NO_COLOR);
  s21_decimal_output_bits(val_1);
  printf("\n%sString representaion%s:\n", GREEN, NO_COLOR);
  char string[DEC_STR_LEN + 1] = {0};
  printf("  %.32f\n", value);
  printf("  float to decimaling...\n");
  printf("===\n");
  s21_from_decimal_to_string(val_1, string);
  printf("res: %s\n\n", string);

  value = 0;
  printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR,
         s21_from_decimal_to_float(val_1, &value));
  printf("  decimal to floating...\n");
  printf("===\n");
  printf("  %f\n", value);
}

// int main(void) {
//   s21_decimal val1 = {{0}};
//   s21_decimal val2 = {{0}};
//   s21_set_bit(&val1, 3, 1);
//   s21_set_bit(&val2, 3, 1);
//   printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR, s21_is_equal(val1,
//   val2)); printf("\n%sBit representaion%s:\n", GREEN, NO_COLOR);
//   s21_decimal_output_bits(val1);
//   s21_decimal_output_bits(val2);
//   printf("\n%sString representaion%s:\n", GREEN, NO_COLOR);
//   char string[DEC_STR_LEN + 1] = {0};
//   s21_from_decimal_to_string(val1, string);
//   printf("res: %s\n", string);
//   s21_from_decimal_to_string(val2, string);
//   printf("res: %s\n", string);
// }

// int main(void) {
//   s21_decimal val_1;
//   int result = 0, number = 0;
//   val_1.bits[0] = INT_MIN;
//   val_1.bits[1] = 0;
//   val_1.bits[2] = 0;
//   val_1.bits[3] = 0;
//   result = s21_from_decimal_to_int(val_1, &number);
//   printf("\n%sReturn value%s: %d\n", GREEN, NO_COLOR, result);
//   printf("\n%sBit representaion%s:\n", GREEN, NO_COLOR);
//   s21_decimal_output_bits(val_1);
//   printf("\n%sString representaion%s:\n", GREEN, NO_COLOR);
//   char string[DEC_STR_LEN + 1] = {0};
//   printf("Max %d\n", INT_MAX);
//   printf("  %d\n", number);
//   printf("  decimaling to int...\n");
//   printf("===\n");
//   s21_from_decimal_to_string(val_1, string);
//   printf("res: %s\n\n", string);
// }

void s21_decimal_output_bits(s21_decimal value) {
  for (int i = 3; i >= 0; i--) {
    unsigned int setter = 1;
    for (int j = 31; j >= 0; j--) {
      if (value.bits[i] & (setter << j)) {
        printf("1");
      } else {
        printf("0");
      }
    }
    printf(" ");
  }
  printf("\n");
}

void s21_buffer_output_bits(s21_buffer value) {
  for (int i = 5; i >= 0; i--) {
    unsigned int setter = 1;
    for (int j = 31; j >= 0; j--) {
      if (value.bits[i] & (setter << j)) {
        printf("1");
      } else {
        printf("0");
      }
    }
    printf(" ");
  }
  printf("\n");
}