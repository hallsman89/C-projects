#include "s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  int status_code = S21_ERROR;
  if (result != NULL) {
    for (int i = 0; i < 3; ++i) {
      result->bits[i] = value.bits[i];
    }
    int exp = s21_get_exponent(value);
    int sign = s21_get_sign(value) ? 0 : 1;
    s21_set_exponent(result, exp);
    s21_set_sign(result, sign);
    status_code = S21_OK;
  }
  return status_code;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  int status_code = S21_ERROR;
  if (result != NULL) {
    s21_set_decimal_zero(result);
    unsigned exp = s21_get_exponent(value);
    s21_buffer buffer = {0};
    s21_copy_decimal_in_buffer(value, &buffer);
    int flag = 0;
    while (exp != 0) {
      exp--;
      flag += s21_buffer_divide_10_no_round(&buffer);
    }
    s21_set_exponent(&value, exp);
    int sign = s21_get_sign(value);
    if (flag && sign) {
      s21_buffer one = {{1, 0, 0, 0, 0, 0}};
      s21_buffer_sum_bits(buffer, one, &buffer);
    }
    s21_copy_buffer_in_decimal(buffer, &value);
    result->bits[0] = value.bits[0];
    result->bits[1] = value.bits[1];
    result->bits[2] = value.bits[2];
    result->bits[3] = value.bits[3];
    status_code = S21_OK;
  }
  return status_code;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int status_code = S21_ERROR;
  if (result && s21_get_exponent(value) <= MAX_EXP) {
    s21_set_decimal_zero(result);
    unsigned exp = s21_get_exponent(value);
    s21_buffer buffer = {0};
    s21_copy_decimal_in_buffer(value, &buffer);
    while (exp > 0) {
      exp--;
      s21_buffer_divide_10_no_round(&buffer);
    }
    s21_set_exponent(&value, exp);
    s21_copy_buffer_in_decimal(buffer, &value);
    result->bits[0] = value.bits[0];
    result->bits[1] = value.bits[1];
    result->bits[2] = value.bits[2];
    result->bits[3] = value.bits[3];
    status_code = S21_OK;
  }

  return status_code;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  int status_code = S21_ERROR;
  if (result && s21_get_exponent(value) <= MAX_EXP) {
    memcpy(result, &value, sizeof(s21_decimal));
    s21_truncate(value, result);
    s21_decimal value_0_dot_5 = {{5, 0, 0, 1 << BEFORE_EXP_LEN}};
    s21_decimal floating_part = {0};
    s21_sub(value, *result, &floating_part);
    s21_set_sign(&floating_part, 0);
    s21_decimal one = {{1, 0, 0, 0}};
    if ((s21_is_equal(floating_part, value_0_dot_5) &&
         s21_get_bit(*result, 0)) ||
        s21_is_greater(floating_part, value_0_dot_5)) {
      if (s21_get_sign(*result)) {
        s21_sub(*result, one, result);
      } else {
        s21_add(*result, one, result);
      }
    }
    status_code = S21_OK;
  }

  return status_code;
}