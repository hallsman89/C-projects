#include "s21_decimal.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  int res = S21_FALSE;
  if (s21_normalize(&value_1, &value_2)) {
    if (value_1.bits[0] == value_2.bits[0] &&
        value_1.bits[1] == value_2.bits[1] &&
        value_1.bits[2] == value_2.bits[2] &&
        value_1.bits[3] == value_2.bits[3]) {
      res = S21_TRUE;
    } else if (s21_is_zero(value_1) && s21_is_zero(value_2)) {
      res = S21_TRUE;
    }
  }
  return res;
}

int s21_is_zero(s21_decimal value) {
  return !value.bits[0] && !value.bits[1] && !value.bits[2];
}

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int res = S21_FALSE;
  int sign_a = s21_get_sign(value_1);
  int sign_b = s21_get_sign(value_2);

  if (s21_is_zero(value_1) && s21_is_zero(value_2)) {
    res = S21_FALSE;
  } else if (sign_a != sign_b) {
    res = (sign_a == 0) ? 1 : 0;
  } else {
    s21_normalize(&value_1, &value_2);
    int flag = S21_TRUE;
    for (int i = S21_BIT_SEQUENCE_SIZE - 1; flag && i >= 0; i--) {
      int bit_a = s21_get_bit(value_1, i);
      int bit_b = s21_get_bit(value_2, i);

      if (bit_a != bit_b) {
        res = (bit_a != 0) ? ((sign_a == 0) ? 1 : 0) : ((sign_a == 0) ? 0 : 1);
        flag = S21_FALSE;
      }
    }
  }
  return res;
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_greater(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_greater(value_2, value_1);
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_less(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return !s21_is_equal(value_1, value_2);
}
