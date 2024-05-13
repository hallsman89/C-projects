#include "s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int status_code = S21_ERROR;
  if (dst != NULL) {
    s21_set_decimal_zero(dst);
    int sign = src < 0 ? 1 : 0;
    unsigned tmp = src < 0 ? -src : src;
    s21_set_sign(dst, sign);
    dst->bits[0] = tmp;
    status_code = S21_OK;
  }
  return status_code;
}

int s21_from_decimal_to_string(s21_decimal value, char *string) {
  int return_value = S21_FALSE;
  if (string && s21_get_exponent(value) <= MAX_EXP) {
    return_value = S21_TRUE;
    for (int i = 0; i < DEC_STR_LEN; i++) {
      string[i] = '0';
    }
    string[DEC_STR_LEN - 1] = '\0';
    char val1[STR_SIZE] = {0};
    char tmp_res[STR_SIZE] = {0};
    for (int i = 0; i < (int)BITS_IN_DEC - 32; i++) {
      if (s21_get_bit(value, i)) {
        sprintf(val1, "%031.0f", pow(2, i));
        s21_decimal_string_sum(string, val1, tmp_res);
        strcpy(string, tmp_res);
      }
    }
    s21_decimal_string_format(string, s21_get_sign(value),
                              s21_get_exponent(value));
  }
  return return_value;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int status_code = S21_ERROR;
  if (dst != NULL) {
    *dst = 0;
    s21_truncate(src, &src);
    if (!src.bits[2] && !src.bits[1]) {
      *dst = src.bits[0];
      if (s21_get_sign(src)) {
        *dst *= -1;
      }
      status_code = S21_OK;
    }
  }
  return status_code;
}

// 01111111111 10000000000

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int status_code = S21_ERROR;
  double res = 0;
  unsigned exp = s21_get_exponent(src);
  if (exp > 28) {
    *dst = 0;
  } else if (dst != NULL) {
    *dst = 0.0;
    for (int i = 0; i < 96; ++i) {
      if (s21_get_bit(src, i)) {
        res += pow(2, i);
      }
    }
    for (unsigned int i = 0; i < exp; ++i) {
      res /= 10;
    }
    if (s21_get_sign(src)) {
      res *= -1;
    }
    *dst = (float)res;
    status_code = S21_OK;
  }

  return status_code;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int status_code = S21_ERROR;
  if (dst && !isnan(src) && !isinf(src)) {
    s21_set_decimal_zero(dst);
    char result[STR_SIZE] = {0};
    sprintf(result, "%.31f", src);
    if (s21_from_string_to_decimal(dst, result)) {
      status_code = S21_OK;
    }
  }

  return status_code;
}

int s21_from_string_to_decimal(s21_decimal *value, char *string_1) {
  int return_value = S21_FALSE;
  if (string_1) {
    s21_delete_zeros(string_1);
  }
  if (value && string_1 && strpbrk(string_1, "123456789")) {
    int sign = 0;
    unsigned int exponent = 0;
    if (string_1[0] == '-') {
      string_1[0] = '0';
      sign = 1;
    }
    int ctr_digits = 0;
    int dot_place = 0;
    int place_digit = 0;
    for (int i = 0; string_1[i]; i++) {
      if (isdigit(string_1[i]) && ctr_digits < 30) {
        ctr_digits++;
        place_digit = i;
      }
      if (string_1[i] == '.') {
        dot_place = i;
      }
    }
    if (ctr_digits > 29) {
      string_1[place_digit] = '\0';
    }
    if (strchr(string_1, '.')) {
      exponent = strchr(string_1, '.') - string_1;
      exponent = strlen(string_1) - exponent - 1;
      char *tmp = strchr(string_1, '.');
      for (int i = 0; tmp[i]; i++) {
        tmp[i] = tmp[i + 1];
      }
    }
    if (exponent <= MAX_EXP && dot_place < 29) {
      s21_buffer buf = {0};
      char string_2[DEC_STR_LEN] = {0};
      unsigned int ctr = 0;
      for (; strcmp(string_1, "1") != 0 && strcmp(string_1, "0") != 0; ctr++) {
        s21_buffer_shift_bit(&buf);
        if ((string_1[strlen(string_1) - 1] - '0') % 2) {
          buf.bits[0] |= 1;
        }
        s21_string_devide_2(string_1, string_2);
        strcpy(string_1, string_2);
      }
      s21_buffer_shift_bit(&buf);
      buf.bits[0] |= 1;
      s21_buffer buf_tmp = {0};
      for (unsigned int i = 0; i <= ctr; i++) {
        s21_buffer_shift_bit(&buf_tmp);
        buf_tmp.bits[0] |= s21_buffer_get_bit(buf, i);
      }
      for (; s21_buffer_is_overflow(buf_tmp) && exponent; exponent--) {
        s21_buffer_divide_10(&buf_tmp);
      }
      if (!s21_buffer_is_overflow(buf_tmp)) {
        return_value = S21_TRUE;
        memcpy(value, &buf_tmp, INT_3_LEN);
        s21_set_exponent(value, exponent);
        s21_set_sign(value, sign);
      }
    }
  }
  return return_value;
}