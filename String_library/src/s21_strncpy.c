// Copies up to n characters from the string pointed to, by src to dest.

#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t size) {
  s21_size_t srclen = s21_strlen(src);
  s21_size_t cpylen = size > srclen ? (srclen + 1) : size;

  for (s21_size_t i = 0; i < cpylen; i++) {
    dest[i] = src[i];
  }

  return dest;
}
