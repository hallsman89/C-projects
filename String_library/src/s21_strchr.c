// Searches for the first occurrence of the character c (an unsigned char) in
// the string pointed to, by the argument str.

#include "s21_string.h"

char *s21_strchr(const char *str, int symbol) {
  int len = s21_strlen(str) + 1;
  const char *result = s21_NULL;

  for (int i = 0; i < len && result == s21_NULL; i++)
    if (str[i] == symbol) result = (str + i);

  return (char *)result;
}