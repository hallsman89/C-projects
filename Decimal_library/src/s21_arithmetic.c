#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_value = INCORRECT_INPUT;
  if (result && s21_normalize(&value_1, &value_2)) {
    int sign_1 = s21_get_sign(value_1);
    int sign_2 = s21_get_sign(value_2);
    if (sign_1 != sign_2) {
      if (sign_1) {
        s21_set_sign(&value_1, sign_2);
        return_value = s21_sub(value_2, value_1, result);
      } else {
        s21_set_sign(&value_2, sign_1);
        return_value = s21_sub(value_1, value_2, result);
      }
    } else {
      unsigned int exp = s21_get_exponent(value_1);
      s21_buffer buf_1 = {{0}};
      s21_buffer buf_2 = {{0}};
      s21_buffer buf_result = {{0}};
      // Copy values to buffer.
      s21_copy_decimal_in_buffer(value_1, &buf_1);
      s21_copy_decimal_in_buffer(value_2, &buf_2);
      // Sum buffers.
      s21_buffer_sum_bits(buf_1, buf_2, &buf_result);
      for (; s21_buffer_is_overflow(buf_result) && exp > MIN_EXP; exp--) {
        s21_buffer_divide_10(&buf_result);
      }
      if (s21_buffer_is_overflow(buf_result)) {
        return_value = sign_1 ? MINUS_INFINITY_ERROR : INFINITY_ERROR;
      } else {
        return_value = CORRECT_RETURN;
        s21_copy_buffer_in_decimal(buf_result, result);
        s21_set_exponent(result, exp);
        s21_set_sign(result, sign_1);
      }
    }
  }
  return return_value;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_value = INCORRECT_INPUT;
  if (result && s21_normalize(&value_1, &value_2)) {
    int sign_1 = s21_get_sign(value_1);
    int sign_2 = s21_get_sign(value_2);
    if (sign_1 != sign_2) {
      s21_set_sign(&value_2, sign_1);
      return_value = s21_add(value_1, value_2, result);
    } else {
      return_value = CORRECT_RETURN;
      unsigned int exp = s21_get_exponent(value_1);
      s21_buffer buf_1 = {{0}};
      s21_buffer buf_2 = {{0}};
      s21_buffer buf_result = {{0}};
      // Copy values to buffer.
      s21_copy_decimal_in_buffer(value_1, &buf_1);
      s21_copy_decimal_in_buffer(value_2, &buf_2);
      // Sum buffers.
      int res_sign = sign_1 ^ s21_buffer_sub_bits(buf_1, buf_2, &buf_result);
      for (; s21_buffer_is_overflow(buf_result) && exp > MIN_EXP; exp--) {
        s21_buffer_divide_10(&buf_result);
      }
      if (s21_buffer_is_overflow(buf_result)) {
        return_value = res_sign ? MINUS_INFINITY_ERROR : INFINITY_ERROR;
      } else {
        return_value = CORRECT_RETURN;
        s21_copy_buffer_in_decimal(buf_result, result);
        s21_set_exponent(result, exp);
        s21_set_sign(result, res_sign);
      }
    }
  }
  return return_value;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_value = INCORRECT_INPUT;
  if (result && s21_get_exponent(value_1) <= MAX_EXP &&
      s21_get_exponent(value_2) <= MAX_EXP) {
    s21_buffer buf_1 = {0};
    s21_buffer buf_2 = {0};
    s21_buffer buf_res = {0};
    s21_copy_decimal_in_buffer(value_1, &buf_1);
    s21_copy_decimal_in_buffer(value_2, &buf_2);
    s21_buffer_multiply(buf_1, buf_2, &buf_res);
    unsigned int exponent =
        s21_get_exponent(value_1) + s21_get_exponent(value_2);
    for (; exponent > MAX_EXP; exponent--) {
      s21_buffer_divide_10(&buf_res);
    }
    for (; s21_buffer_is_overflow(buf_res) && exponent > MIN_EXP; exponent--) {
      s21_buffer_divide_10(&buf_res);
    }
    if (s21_buffer_is_overflow(buf_res)) {
      return_value = s21_get_sign(value_1) ^ s21_get_sign(value_2)
                         ? MINUS_INFINITY_ERROR
                         : INFINITY_ERROR;
    } else {
      int sign = s21_get_sign(value_1) ^ s21_get_sign(value_2);
      s21_copy_buffer_in_decimal(buf_res, result);
      s21_set_exponent(result, exponent);
      s21_set_sign(result, sign);
      if (s21_is_zero(*result) && !s21_is_zero(value_1) &&
          !s21_is_zero(value_2)) {
        return_value = MINUS_INFINITY_ERROR;
      } else {
        return_value = CORRECT_RETURN;
      }
    }
  }
  return return_value;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_value = INCORRECT_INPUT;
  if (result) {
    float f1 = 0;
    float f2 = 0;
    float f_res = 0;
    if (!s21_from_decimal_to_float(value_1, &f1) &&
        !s21_from_decimal_to_float(value_2, &f2)) {
      if (f2 == 0.0) {
        return_value = ZERO_DIVISION_ERROR;
      } else {
        f_res = f1 / f2;
        if (s21_from_float_to_decimal(f_res, result)) {
          return_value = CORRECT_RETURN;
        }
      }
    }
  }
  return return_value;
}