#include "s21_decimal.h"

int s21_normalize(s21_decimal *value_1, s21_decimal *value_2) {
  int return_value = S21_FALSE;
  if (value_1 && value_2 && s21_get_exponent(*value_1) <= MAX_EXP &&
      s21_get_exponent(*value_2) <= MAX_EXP) {
    return_value = S21_TRUE;
    // Get exponents.
    unsigned int exp_1 = s21_get_exponent(*value_1);
    unsigned int exp_2 = s21_get_exponent(*value_2);
    // Determine greater exponent.
    unsigned int great_exp = exp_1;
    unsigned int less_exp = exp_2;
    s21_decimal *great_dec = value_1;
    s21_decimal *less_dec = value_2;
    if (exp_1 < exp_2) {
      less_exp = exp_1;
      great_exp = exp_2;
      less_dec = value_1;
      great_dec = value_2;
    }
    // Initialize buffers for calculations and fill them.
    unsigned int shift = great_exp - less_exp;
    less_exp += s21_decimal_shift_left(less_dec, shift);
    shift = great_exp - less_exp;
    great_exp -= s21_decimal_shift_right(great_dec, shift);
    // Set exponents to number.
    s21_set_exponent(less_dec, less_exp);
    s21_set_exponent(great_dec, great_exp);
  }
  return return_value;
}

int s21_decimal_shift_left(s21_decimal *less_dec, unsigned int shift) {
  unsigned int made_shift = 0;
  if (less_dec && shift <= MAX_EXP) {
    s21_buffer less_buff = {0};
    memcpy(&less_buff, less_dec, INT_3_LEN);
    // Multiple less exp, while can or while it not equal greater.
    s21_buffer ten = S21_BUFFER_10;
    for (; made_shift < shift && s21_buffer_can_mult_10(less_buff);
         made_shift++) {
      s21_buffer tmp_result = {0};
      s21_buffer_multiply(less_buff, ten, &tmp_result);
      memcpy(&less_buff, &tmp_result, INT_6_LEN);
    }
    memcpy(less_dec, &less_buff, INT_3_LEN);
  }
  return made_shift;
}

int s21_decimal_shift_right(s21_decimal *great_dec, unsigned int shift) {
  unsigned int made_shift = 0;
  if (great_dec && shift <= MAX_EXP) {
    s21_buffer great_buff = {0};
    memcpy(&great_buff, great_dec, INT_3_LEN);
    for (; made_shift < shift; made_shift++) {
      s21_buffer_divide_10(&great_buff);
    }
    memcpy(great_dec, &great_buff, INT_3_LEN);
  }
  return made_shift;
}

int s21_buffer_divide_10(s21_buffer *value) {
  int return_value = S21_FALSE;
  if (value) {
    return_value = S21_TRUE;
    unsigned int dividend = 0;
    unsigned int divisor = 10;
    s21_buffer result = {0};
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      dividend |= s21_buffer_shift_bit(value);
      s21_buffer_shift_bit(&result);
      if (dividend >= divisor) {
        dividend %= 10;
        result.bits[0] |= 1;
      }
      dividend <<= 1;
    }
    if ((dividend >> 1) >= 5) {
      s21_buffer one = {{1, 0, 0, 0, 0, 0}};
      s21_buffer_sum_bits(result, one, &result);
    }
    memcpy(value, &result, INT_6_LEN);
  }
  return return_value;
}

int s21_buffer_divide_10_no_round(s21_buffer *value) {
  int return_value = S21_FALSE;
  if (value) {
    unsigned int dividend = 0;
    unsigned int divisor = 10;
    s21_buffer result = {0};
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      dividend |= s21_buffer_shift_bit(value);
      s21_buffer_shift_bit(&result);
      if (dividend >= divisor) {
        dividend %= 10;
        result.bits[0] |= 1;
      }
      dividend <<= 1;
    }
    if (dividend != 0) {
      return_value = S21_TRUE;
    }
    memcpy(value, &result, INT_6_LEN);
  }
  return return_value;
}

unsigned int s21_buffer_shift_bit(s21_buffer *value) {
  unsigned int bit = 0;
  if (value) {
    bit = GET_FIRST_BIT((value->bits[5]));
    unsigned int bit_4 = GET_FIRST_BIT(value->bits[4]);
    unsigned int bit_3 = GET_FIRST_BIT(value->bits[3]);
    unsigned int bit_2 = GET_FIRST_BIT(value->bits[2]);
    unsigned int bit_1 = GET_FIRST_BIT(value->bits[1]);
    unsigned int bit_0 = GET_FIRST_BIT(value->bits[0]);
    // Shift.
    value->bits[5] <<= 1;
    value->bits[5] |= bit_4;
    value->bits[4] <<= 1;
    value->bits[4] |= bit_3;
    value->bits[3] <<= 1;
    value->bits[3] |= bit_2;
    value->bits[2] <<= 1;
    value->bits[2] |= bit_1;
    value->bits[1] <<= 1;
    value->bits[1] |= bit_0;
    value->bits[0] <<= 1;
  }
  return bit;
}

int s21_buffer_multiply(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result) {
  int return_value = S21_FALSE;
  if (result) {
    return_value = S21_TRUE;
    s21_buffer_set_zeros(result);
    s21_buffer tmp_multiply[BITS_IN_BUF] = {0};
    // Perfom multiplication for many buffers.
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      if (s21_buffer_get_bit(value_2, i)) {
        memcpy(tmp_multiply + i, &value_1, INT_6_LEN);
        for (unsigned int j = 0; j < i; j++) {
          s21_buffer_shift_bit(tmp_multiply + i);
        }
      }
    }
    // Summarize buffers to one.
    s21_buffer tmp_buf1 = {0};
    s21_buffer tmp_buf2 = {0};
    s21_buffer *ptr1 = &tmp_buf1;
    s21_buffer *ptr2 = &tmp_buf2;
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      s21_buffer_sum_bits(tmp_multiply[i], *ptr1, ptr2);
      s21_buffer *tmp = ptr1;
      ptr1 = ptr2;
      ptr2 = tmp;
    }
    memcpy(result, ptr2, INT_6_LEN);
  }
  return return_value;
}

unsigned int s21_buffer_get_bit(s21_buffer value, unsigned int position) {
  unsigned int bit = 0;
  if (position < BITS_IN_BUF) {
    unsigned int index = position / 32;
    position = position % 32;
    bit = (value.bits[index] & (1 << position)) >> position;
  }
  return bit;
}

int s21_buffer_sum_bits(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result) {
  int return_value = S21_FALSE;
  if (result) {
    return_value = S21_TRUE;
    s21_buffer_set_zeros(result);
    unsigned int add_one = 0;
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      unsigned int sum = s21_buffer_get_bit(value_1, i) +
                         s21_buffer_get_bit(value_2, i) + add_one;
      add_one = sum > 1 ? 1 : 0;
      s21_buffer_set_bit(result, i, sum % 2);
    }
  }
  return return_value;
}

int s21_buffer_set_bit(s21_buffer *value, unsigned int position,
                       unsigned int bit) {
  int return_value = S21_FALSE;
  if (value && position < BITS_IN_BUF && bit < 2) {
    return_value = S21_TRUE;
    unsigned int index = position / 32;
    position = position % 32;
    (value->bits[index]) |= (1 << position);
    (value->bits[index]) &= ~((1 ^ bit) << position);
  }
  return return_value;
  ;
}

int s21_buffer_can_mult_10(s21_buffer value) {
  int return_flag = s21_buffer_is_overflow(value) ? 0 : 1;
  if (return_flag) {
    s21_buffer result = {0};
    s21_buffer ten = S21_BUFFER_10;
    s21_buffer_multiply(value, ten, &result);
    return_flag = s21_buffer_is_overflow(result) ? 0 : 1;
  }
  return return_flag;
}

int s21_buffer_is_overflow(s21_buffer value) {
  int return_flag = S21_TRUE;
  if (!value.bits[5] && !value.bits[4] && !value.bits[3]) {
    return_flag = S21_FALSE;
  }
  return return_flag;
}

int s21_buffer_set_zeros(s21_buffer *value) {
  int return_value = S21_FALSE;
  if (value) {
    for (unsigned int i = 0; i < BITS_IN_BUF; i++) {
      s21_buffer_set_bit(value, i, 0);
    }
  }
  return return_value;
}

int s21_buffer_sub_bits(s21_buffer value_1, s21_buffer value_2,
                        s21_buffer *result) {
  int sign = 0;
  if (result && !s21_buffer_is_overflow(value_1) &&
      !s21_buffer_is_overflow(value_2)) {
    if (s21_buffer_is_greater(value_2, value_1)) {
      sign = 1;
      s21_buffer tmp = {0};
      memcpy(&tmp, &value_1, INT_6_LEN);
      memcpy(&value_1, &value_2, INT_6_LEN);
      memcpy(&value_2, &tmp, INT_6_LEN);
    }
    s21_buffer addition = {{~0, ~0, ~0, 0, 0, 0}};
    addition.bits[2] ^= value_2.bits[2];
    addition.bits[1] ^= value_2.bits[1];
    addition.bits[0] ^= value_2.bits[0];
    s21_buffer one = {{1, 0, 0, 0, 0, 0}};
    s21_buffer_sum_bits(value_1, addition, result);
    s21_buffer_sum_bits(*result, one, result);
    result->bits[3] = 0;
  }
  return sign;
}

int s21_buffer_is_greater(s21_buffer value_1, s21_buffer value_2) {
  int return_value = S21_FALSE;
  int cycle_flag = S21_TRUE;
  for (unsigned int i = 0; cycle_flag && i < BITS_IN_BUF; i++) {
    unsigned int sum = s21_buffer_get_bit(value_1, BITS_IN_BUF - i - 1) +
                       s21_buffer_get_bit(value_2, BITS_IN_BUF - i - 1);
    if (sum == 1) {
      return_value = s21_buffer_get_bit(value_1, BITS_IN_BUF - i - 1)
                         ? S21_TRUE
                         : S21_FALSE;
      cycle_flag = S21_FALSE;
    }
  }
  return return_value;
}

void *s21_insert(const char *src, const char *str, size_t start_index) {
  char *new_str = NULL;
  if (str != NULL && src != NULL) {
    size_t size = strlen(str) + strlen(src);
    size_t fin_index = start_index + strlen(str);
    new_str = (char *)calloc(size + 1, sizeof(char));
    if (new_str != NULL && start_index < strlen(src)) {
      for (size_t i = 0; i < start_index; i++) new_str[i] = src[i];
      for (size_t i = start_index, j = 0; i < fin_index; i++, j++)
        new_str[i] = str[j];
      for (size_t i = fin_index, j = start_index; i < size; i++, j++)
        new_str[i] = src[j];
    } else
      new_str = NULL;
  }
  return new_str;
}

int find_unmatch(const char *src, const char *trim_chars, int i) {
  int position = -1;
  for (int j = 0; trim_chars[j]; j++) {
    if (src[i] == trim_chars[j]) {
      position = -1;
      break;
    } else
      position = i;
  }
  return position;
}

int s21_decimal_string_sum(char *val1, char *val2, char *res) {
  int return_value = S21_FALSE;
  if (val1 && val2 && res) {
    return_value = S21_TRUE;
    for (int i = 0; i < DEC_STR_LEN; i++) {
      res[i] = 0;
    }
    int add_one = 0;
    for (int i = DEC_STR_LEN - 2; i >= 0; i--) {
      int sum = (val1[i] - '0') + (val2[i] - '0') + add_one;
      add_one = sum / 10;
      res[i] = (sum % 10) + '0';
    }
  }
  return return_value;
}

void s21_decimal_string_format(char *dest, int sign, int dot_place) {
  if (dest) {
    if (dot_place > 0) {
      size_t index = strlen(dest) - dot_place;
      char *new_str = s21_insert(dest, ".", index);
      if (new_str) {
        strcpy(dest, new_str);
        free(new_str);
      }
    }
    s21_delete_zeros(dest);
    if (sign) {
      char *new_str2 = s21_insert(dest, "-", 0);
      if (new_str2) {
        strcpy(dest, new_str2);
        free(new_str2);
      }
    }
  }
}

void s21_delete_zeros(char *str) {
  char tmp[STR_SIZE] = {0};
  int i = 0;
  if (strchr(str, '.')) {
    for (i = strlen(str) - 1; str[i] == '0'; i--)
      ;
    if (str[i] == '.') {
      str[i] = '\0';
    } else {
      str[i + 1] = '\0';
    }
  }
  for (i = 0; str[i] == '0'; i++)
    ;
  if (str[i] == '\0') {
    str[0] = '0';
    str[1] = '\0';
  } else if (str[i] == '.') {
    tmp[0] = '0';
    strcpy(tmp + 1, str + i);
  } else {
    strcpy(tmp, str + i);
  }
  if (str[i] == '\0') {
    str[0] = '0';
    str[1] = '\0';
  } else {
    strcpy(str, tmp);
  }
}

void s21_copy_decimal_in_buffer(s21_decimal src, s21_buffer *dst) {
#ifdef DEBUG
  if (dst == NULL) {
    fprintf(stderr, "s21_copy_decimal_in_buffer: dst = NULL\n");
    exit(EXIT_FAILURE);
  }
#endif
  for (int i = 0; i < 3; ++i) {
    dst->bits[i] = src.bits[i];
  }
}

void s21_copy_buffer_in_decimal(s21_buffer src, s21_decimal *dst) {
#ifdef DEBUG
  if (dst == NULL) {
    fprintf(stderr, "s21_copy_buffer_in_decimal: dst = NULL\n");
    exit(EXIT_FAILURE);
  }
#endif
  for (int i = 0; i < 3; ++i) {
    dst->bits[i] = src.bits[i];
  }
}

int s21_string_devide_2(char string_1[STR_SIZE], char string_2[STR_SIZE]) {
  int rv = S21_FALSE;
  if (string_1 && string_2) {
    rv = S21_TRUE;
    int number = 0;
    int i = 0;
    for (; string_1[i]; i++) {
      number *= 10;
      number += string_1[i] - '0';
      if (number > 1) {
        string_2[i] = (number / 2) + '0';
      } else {
        string_2[i] = '0';
      }
      number %= 2;
    }
    string_2[i] = '\0';
    s21_delete_zeros(string_2);
  }
  return rv;
}