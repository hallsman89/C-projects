#include "s21_decimal.h"

int s21_get_bit(s21_decimal value, int position) {
#ifdef DEBUG
  if (position < 0 || 127 < position) {
    fprintf(stderr, "s21_get_bit: wrong position value - %d\n", position);
    exit(EXIT_FAILURE);
  }
#endif
  int index = position / 32;
  position = position % 32;
  int tmp = 1;
  int bit = (value.bits[index] & (tmp << position)) >> position;

  return bit;
}

unsigned int s21_get_exponent(s21_decimal value) {
  unsigned int exponent = value.bits[3];
  exponent <<= AFTER_EXP_LEN + SIGN_LEN;
  exponent >>= AFTER_EXP_LEN + SIGN_LEN + BEFORE_EXP_LEN;
  return exponent;
}

int s21_get_sign(s21_decimal value) {
  return value.bits[3] >> (BEFORE_EXP_LEN + EXP_LEN + AFTER_EXP_LEN);
}
void s21_set_sign(s21_decimal *value, int sign) {
  int tmp = 1 << (BEFORE_EXP_LEN + EXP_LEN + AFTER_EXP_LEN);
  switch (sign) {
    case 0:
      tmp = ~tmp;
      value->bits[3] &= tmp;
      break;
    case 1:
      value->bits[3] |= tmp;
      break;
#ifdef DEBUG
    default:
      fprintf(stderr, "s21_set_sign: Wrong sign = %d\n", sign);
      exit(EXIT_FAILURE);
#endif
  }
}

void s21_set_exponent(s21_decimal *value, unsigned int exponent) {
#ifdef DEBUG
  if (28 < exponent) {
    fprintf(stderr, "s21_set_exponent: Wrong exponent = %d\n", exponent);
    exit(EXIT_FAILURE);
  }
  if (value == NULL) {
    fprintf(stderr, "s21_set_exponent: Decimal == NULL\n");
  }
#endif
  exponent <<= BEFORE_EXP_LEN;
  value->bits[3] &= 0x80000000;
  value->bits[3] |= exponent;
}

void s21_set_decimal_zero(s21_decimal *value) {
  for (int i = 0; i < 4; ++i) {
    value->bits[i] = 0;
  }
}

// TODO: double code.
void s21_set_bit_zero(s21_decimal *value, int position) {
#ifdef DEBUG
  if (position < 0 || 127 < position) {
    fprintf(stderr, "s21_set_bit_zero: Wrong position - %d\n", position);
    exit(EXIT_FAILURE);
  }
  if (value == NULL) {
    fprintf(stderr, "s21_set_bit_zero: Decimal == NULL\n");
    exit(EXIT_FAILURE);
  }
#endif

  int index = position / 32;
  position %= 32;
  int tmp = ~(1 << position);
  value->bits[index] = value->bits[index] & tmp;
}

void s21_set_bit_one(s21_decimal *value, int position) {
#ifdef DEBUG
  if (position < 0 || 127 < position) {
    fprintf(stderr, "s21_set_bit_one: Wrong position - %d\n", position);
    exit(EXIT_FAILURE);
  }
  if (value == NULL) {
    fprintf(stderr, "s21_set_bit_one: decimal == NULL\n");
    exit(EXIT_FAILURE);
  }
#endif
  unsigned int tmp = 1;
  int index = position / 32;
  position %= 32;
  value->bits[index] = value->bits[index] | (tmp << position);
}

// Better make set bit.
void s21_set_bit(s21_decimal *value, int position, int bit) {
  if (bit) {
    s21_set_bit_one(value, position);
  } else {
    s21_set_bit_zero(value, position);
  }
}
