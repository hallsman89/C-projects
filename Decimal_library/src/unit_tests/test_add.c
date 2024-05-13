
#include <check.h>
#include <stdio.h>

#include "../s21_decimal.h"
START_TEST(test_1) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_2) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_3) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_4) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_5) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_6) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_7) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_8) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_9) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_10) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_11) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_12) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_13) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_14) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_15) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_16) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_17) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_18) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_19) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_20) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_21) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_22) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_23) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_24) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_25) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_26) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_27) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_28) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_29) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_30) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_31) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_32) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_33) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_34) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_35) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_36) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_37) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_38) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_39) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_40) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_41) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_42) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_43) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_44) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_45) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_46) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_47) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_48) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_49) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_50) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_51) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_52) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_53) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_54) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_55) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_56) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_57) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_58) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_59) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_60) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_61) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_62) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_63) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_64) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_65) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_66) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_67) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_68) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_69) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_70) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_71) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_72) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_73) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_74) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_75) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_76) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_77) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_78) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_79) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_80) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_81) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_82) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_83) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_84) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_85) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_86) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_87) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_88) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_89) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_90) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_91) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_92) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_93) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_94) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_95) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_96) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_97) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_98) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_99) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_100) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_101) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_102) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_103) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_104) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_105) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_106) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_107) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_108) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_109) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_110) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_111) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_112) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_113) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_114) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_115) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_116) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_117) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_118) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_119) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_120) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_121) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_122) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_123) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_124) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_125) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_126) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_127) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_128) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_129) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_130) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_131) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_132) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_133) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_134) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_135) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_136) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_137) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_138) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_139) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_140) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_141) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_142) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_143) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_144) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_145) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_146) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_147) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_148) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_149) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_150) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_151) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_152) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_153) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_154) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_155) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_156) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_157) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_158) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_159) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_160) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_161) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_162) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_163) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_164) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_165) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_166) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_167) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_168) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_169) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_170) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_171) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_172) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_173) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_174) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_175) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_176) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_177) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_178) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_179) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_180) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_181) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_182) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_183) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_184) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_185) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_186) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_187) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_188) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_189) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_190) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_191) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_192) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_193) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_194) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_195) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_196) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_197) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_198) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_199) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_200) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_201) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_202) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_203) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_204) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_205) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_206) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_207) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_208) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_209) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_210) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_211) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_212) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_213) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_214) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_215) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_216) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_217) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_218) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_219) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_220) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_221) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_222) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_223) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_224) {
  s21_decimal val_1 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_225) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_226) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_227) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_228) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_229) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_230) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_231) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_232) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_233) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_234) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_235) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_236) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_237) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_238) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_239) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_240) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_241) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_242) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_243) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_244) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_245) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_246) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_247) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_248) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_249) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_250) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_251) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_252) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_253) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_254) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_255) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_256) {
  s21_decimal val_1 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_257) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_258) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_259) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_260) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_261) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_262) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_263) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_264) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_265) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_266) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_267) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_268) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_269) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_270) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_271) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_272) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_273) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_274) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_275) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_276) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_277) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_278) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_279) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_280) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_281) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_282) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_283) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_284) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_285) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_286) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_287) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_288) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_289) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_290) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_291) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_292) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_293) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_294) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_295) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_296) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_297) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_298) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_299) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_300) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_301) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_302) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_303) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_304) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_305) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_306) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_307) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_308) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_309) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_310) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_311) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_312) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_313) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_314) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_315) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_316) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_317) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_318) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_319) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_320) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_321) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "562949953421310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_322) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_323) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_324) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-562949953421310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_325) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "309622474381720.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_326) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "253327479039589.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_327) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-253327479039589.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_328) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-309622474381720.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_329) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710657.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_330) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710652.18525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_331) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710652.18525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_332) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710657.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_333) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_334) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_335) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_336) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_337) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "309622474381720.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_338) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-253327479039589.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_339) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "253327479039589.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_340) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-309622474381720.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_341) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "56294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_342) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_343) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_344) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-56294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_345) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671068.31474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_346) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671062.68525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_347) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671062.68525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_348) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671068.31474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_349) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.50000000000003";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_350) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.49999999999997";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_351) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.49999999999997";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_352) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.50000000000003";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_353) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710657.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_354) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710652.18525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_355) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710652.18525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_356) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710657.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_357) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671068.31474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_358) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671062.68525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_359) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671062.68525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_360) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671068.31474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_361) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "5.6294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_362) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_363) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_364) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-5.6294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_365) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.814749767106578147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_366) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.814749767106521852502328934";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_367) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.814749767106521852502328934";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_368) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.814749767106578147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_369) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_370) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_371) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_372) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_373) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.50000000000003";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_374) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.49999999999997";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_375) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.49999999999997";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_376) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.50000000000003";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_377) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.814749767106578147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_378) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.814749767106521852502328934";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_379) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.814749767106521852502328934";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_380) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.814749767106578147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_381) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.000000000000056294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_382) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_383) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_384) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.000000000000056294995342131";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_385) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_386) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_387) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_388) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_389) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_390) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710654.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_391) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710654.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_392) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_393) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_394) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_395) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_396) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_397) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_398) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_399) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_400) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_401) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671066.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_402) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671064.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_403) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671064.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_404) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671066.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_405) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.6";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_406) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.4";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_407) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.4";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_408) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.6";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_409) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.50000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_410) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.49999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_411) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.49999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_412) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.50000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_413) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_414) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_415) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_416) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_417) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "3.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_418) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_419) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_420) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-3.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_421) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.91474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_422) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.71474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_423) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.71474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_424) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.91474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_425) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_426) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_427) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_428) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_429) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_430) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_431) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_432) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_433) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.000000000000028147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_434) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_435) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_436) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.000000000000028147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_437) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_438) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_439) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_440) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_441) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000381474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_442) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000181474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_443) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000181474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_444) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000381474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_445) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_446) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_447) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_448) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_449) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_450) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514264056118567239680";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_451) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514264056118567239680";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_452) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_453) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426715234331105689";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_454) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426152284377684379";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_455) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426152284377684379";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_456) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426715234331105689";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_457) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1073756601853298.375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_458) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-510806648431988.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_459) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "510806648431988.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_460) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1073756601853298.375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_461) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710662.9228162514264";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_462) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710647.0771837485736";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_463) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710647.0771837485736";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_464) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710662.9228162514264";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_465) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_466) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-779228162514264309446046279269";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_467) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "779228162514264309446046279269";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_468) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_469) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426461906852066100";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_470) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_471) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_472) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426461906852066100";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_473) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "820429122813708.8759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_474) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-764134127471577.87593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_475) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "764134127471577.87593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_476) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-820429122813708.8759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_477) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671073.42281625142643";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_478) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671057.57718374857357";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_479) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671057.57718374857357";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_480) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671073.42281625142643";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_481) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_482) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_483) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_484) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_485) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395037";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_486) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395031";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_487) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395031";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_488) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395037";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_489) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142646.19068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_490) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142640.5611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_491) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142640.5611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_492) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142646.19068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_493) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "10.73756601853298375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_494) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-5.108066484319883759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_495) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "5.108066484319883759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_496) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-10.73756601853298375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_497) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_498) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_499) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_500) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_501) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_502) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_503) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_504) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_505) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_506) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_507) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_508) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_509) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264619068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_510) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_511) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_512) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264619068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_513) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_514) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_515) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_516) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_517) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_518) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_519) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_520) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_521) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_522) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_523) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_524) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_525) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_526) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_527) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_528) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_529) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_530) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_531) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_532) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_533) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_534) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_535) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_536) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_537) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_538) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_539) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_540) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_541) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_542) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_543) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_544) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_545) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_546) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_547) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_548) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_549) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_550) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_551) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_552) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_553) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_554) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_555) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_556) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_557) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_558) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_559) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_560) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_561) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_562) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_563) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_564) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_565) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_566) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_567) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_568) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_569) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_570) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_571) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_572) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_573) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_574) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_575) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_576) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_577) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_578) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_579) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_580) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_581) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671066.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_582) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671064.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_583) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671064.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_584) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671066.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_585) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "3.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_586) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_587) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_588) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-3.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_589) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.000000000000028147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_590) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_591) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_592) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.000000000000028147497671066";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_593) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_594) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710654.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_595) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710654.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_596) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_597) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.6";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_598) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.4";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_599) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.4";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_600) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.6";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_601) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.91474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_602) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.71474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_603) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.71474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_604) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.91474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_605) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_606) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_607) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0999999999999718525023289345";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_608) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1000000000000281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_609) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_610) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_611) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_612) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_613) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.50000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_614) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.49999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_615) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.49999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_616) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.50000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_617) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_618) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_619) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_620) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_621) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000381474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_622) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000181474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_623) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000181474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_624) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000381474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_625) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_626) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_627) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_628) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_629) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_630) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_631) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_632) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671065.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_633) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_634) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_635) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_636) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2.81474976710655";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_637) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_638) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_639) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000281474976710654";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_640) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000281474976710656";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_641) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "2";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_642) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_643) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_644) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-2";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_645) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_646) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_647) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_648) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_649) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_650) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.99999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_651) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.99999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_652) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_653) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_654) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_655) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_656) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_657) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_658) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_659) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_660) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_661) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.2";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_662) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_663) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_664) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.2";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_665) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.10000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_666) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.09999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_667) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.09999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_668) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.10000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_669) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_670) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_671) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_672) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_673) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_674) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.99999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_675) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.99999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_676) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1.00000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_677) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.10000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_678) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.09999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_679) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.09999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_680) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.10000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_681) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.00000000000002";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_682) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_683) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_684) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.00000000000002";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_685) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000100000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_686) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000099999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_687) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000099999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_688) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000100000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_689) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_690) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.9999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_691) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.9999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_692) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_693) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.1000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_694) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_695) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0999999999999999999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_696) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.1000000000000000000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_697) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000100000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_698) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000099999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_699) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000099999999999999";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_700) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000100000000000001";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_701) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0.0000000000000000000000000002";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_702) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_703) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_704) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-0.0000000000000000000000000002";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_705) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_706) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_707) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_708) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_709) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395035";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_710) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_711) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_712) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395035";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_713) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142644.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_714) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142642.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_715) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142642.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_716) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142644.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_717) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "8.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_718) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-6.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_719) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "6.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_720) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-8.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_721) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_722) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_723) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_724) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_725) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_726) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_727) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_728) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_729) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.4759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_730) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.2759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_731) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.2759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_732) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.4759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_733) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "8.022816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_734) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.822816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_735) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.822816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_736) {
  s21_decimal val_1 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-8.022816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_737) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_738) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_739) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_740) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_741) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_742) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_743) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_744) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_745) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_746) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_747) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_748) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_749) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426443759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_750) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426423759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_751) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426423759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_752) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426443759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_753) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_754) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_755) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_756) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_757) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_758) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_759) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_760) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_761) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_762) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_763) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_764) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_765) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_766) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_767) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_768) {
  s21_decimal val_1 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_769) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_770) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_771) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_772) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_773) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_774) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_775) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_776) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_777) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_778) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_779) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_780) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_781) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_782) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_783) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_784) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 0x28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_785) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_786) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_787) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_788) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_789) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_790) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_791) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_792) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_793) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_794) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_795) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_796) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_797) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_798) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_799) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_800) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_801) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_802) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_803) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_804) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_805) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_806) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_807) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_808) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_809) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_810) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_811) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_812) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_813) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_814) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_815) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_816) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_817) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_818) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_819) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_820) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_821) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_822) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_823) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_824) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000000, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_825) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_826) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_827) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_828) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_829) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_830) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_831) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_832) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000000, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_833) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_834) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514264056118567239680";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_835) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514264056118567239680";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_836) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_837) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_838) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "779228162514264309446046279269";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_839) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-779228162514264309446046279269";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_840) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_841) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_842) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_843) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_844) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_845) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_846) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_847) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_848) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0x28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_849) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426715234331105689";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_850) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426152284377684379";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_851) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426152284377684379";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_852) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426715234331105689";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_853) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426461906852066100";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_854) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_855) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_856) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426461906852066100";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_857) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395037";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_858) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395031";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_859) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395031";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_860) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395037";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_861) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_862) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_863) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_864) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_865) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1073756601853298.375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_866) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "510806648431988.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_867) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-510806648431988.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_868) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1073756601853298.375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_869) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "820429122813708.8759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_870) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "764134127471577.87593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_871) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-764134127471577.87593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_872) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-820429122813708.8759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_873) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142646.19068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_874) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142640.5611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_875) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142640.5611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_876) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142646.19068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_877) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_878) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_879) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_880) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_881) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710662.9228162514264";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_882) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710647.0771837485736";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_883) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "281474976710647.0771837485736";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_884) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-281474976710662.9228162514264";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_885) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671073.42281625142643";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_886) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671057.57718374857357";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_887) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "28147497671057.57718374857357";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_888) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0x0000FFFF, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-28147497671073.42281625142643";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_889) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "10.73756601853298375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_890) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "5.108066484319883759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_891) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-5.108066484319883759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_892) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-10.73756601853298375935439503";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_893) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264619068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_894) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_895) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426405611856723968";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_896) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0x0000FFFF, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264619068520661";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_897) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_898) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_899) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_900) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_901) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_902) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_903) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_904) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_905) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_906) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_907) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_908) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_909) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_910) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_911) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_912) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 0x28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_913) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395035";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_914) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_915) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_916) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395035";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_917) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_918) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_919) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_920) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_921) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_922) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_923) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_924) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_925) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_926) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_927) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_928) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395033.5";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_929) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142644.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_930) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142642.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_931) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142642.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_932) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142644.3759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_933) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.4759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_934) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.2759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_935) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.2759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_936) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.4759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_937) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_938) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_939) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_940) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_941) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_942) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_943) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_944) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142643.37593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_945) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "8.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_946) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "6.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_947) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-6.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_948) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-8.922816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_949) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "8.022816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_950) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.822816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_951) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.822816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_952) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0x00000001, 0x00000000, 0x00000000, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-8.022816251426433759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_953) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426443759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_954) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.922816251426423759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_955) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426423759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_956) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.922816251426443759354395034";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_957) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_958) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_959) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_960) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0x00000001, 0x00000000, 0x00000000, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7.9228162514264337593543950335";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_961) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_962) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_963) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_964) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_965) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_966) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "71305346262837903834189555310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_967) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-71305346262837903834189555310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_968) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_969) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_970) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514263545311918807700";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_971) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514263545311918807700";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_972) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_973) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_974) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514264337593543950330";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_975) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514264337593543950330";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_976) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_977) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_978) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-71305346262837903834189555310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_979) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "71305346262837903834189555310";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_980) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_981) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "15845632502852867518708790070";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_982) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_983) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_984) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-15845632502852867518708790070";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_985) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251427226040979537677";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_986) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251425641477729252391";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_987) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251425641477729252391";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_988) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251427226040979537677";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_989) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395042";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_990) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395026";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_991) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395026";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_992) {
  s21_decimal val_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395042";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_993) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_994) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514263545311918807700";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_995) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514263545311918807700";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_996) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_997) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251427226040979537677";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_998) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251425641477729252391";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_999) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251425641477729252391";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1000) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251427226040979537677";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1001) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "1584563250285286.751870879007";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1002) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1003) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1004) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-1584563250285286.751870879007";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1005) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142651.2987516909298";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1006) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142635.453119188077";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1007) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142635.453119188077";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1008) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142651.2987516909298";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1009) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 1);
}
END_TEST

START_TEST(test_1010) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-79228162514264337593543950330";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1011) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "79228162514264337593543950330";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1012) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  ck_assert_int_eq(return_val, 2);
}
END_TEST

START_TEST(test_1013) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395042";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1014) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395026";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1015) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "7922816251426433759354395026";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1016) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-7922816251426433759354395042";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1017) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142651.2987516909298";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1018) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142635.453119188077";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1019) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "792281625142635.453119188077";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1020) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 14 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-792281625142651.2987516909298";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1021) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "15.84563250285286751870879007";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1022) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1023) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 0 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "0";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

START_TEST(test_1024) {
  s21_decimal val_1 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal val_2 = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 28 << 16 | 1 << 31}};
  s21_decimal res = {0};
  int return_val = s21_add(val_1, val_2, &res);
  char string[DEC_STR_LEN + 1] = {0};
  s21_from_decimal_to_string(res, string);
  char cmp[] = "-15.84563250285286751870879007";
  ck_assert_int_eq(return_val, 0);
  ck_assert_str_eq(string, cmp);
}
END_TEST

Suite *s21_decimal_suite(void) {
  Suite *s = suite_create("s21_decimal");
  TCase *tc = tcase_create("case_decimal");
  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);
  tcase_add_test(tc, test_9);
  tcase_add_test(tc, test_10);
  tcase_add_test(tc, test_11);
  tcase_add_test(tc, test_12);
  tcase_add_test(tc, test_13);
  tcase_add_test(tc, test_14);
  tcase_add_test(tc, test_15);
  tcase_add_test(tc, test_16);
  tcase_add_test(tc, test_17);
  tcase_add_test(tc, test_18);
  tcase_add_test(tc, test_19);
  tcase_add_test(tc, test_20);
  tcase_add_test(tc, test_21);
  tcase_add_test(tc, test_22);
  tcase_add_test(tc, test_23);
  tcase_add_test(tc, test_24);
  tcase_add_test(tc, test_25);
  tcase_add_test(tc, test_26);
  tcase_add_test(tc, test_27);
  tcase_add_test(tc, test_28);
  tcase_add_test(tc, test_29);
  tcase_add_test(tc, test_30);
  tcase_add_test(tc, test_31);
  tcase_add_test(tc, test_32);
  tcase_add_test(tc, test_33);
  tcase_add_test(tc, test_34);
  tcase_add_test(tc, test_35);
  tcase_add_test(tc, test_36);
  tcase_add_test(tc, test_37);
  tcase_add_test(tc, test_38);
  tcase_add_test(tc, test_39);
  tcase_add_test(tc, test_40);
  tcase_add_test(tc, test_41);
  tcase_add_test(tc, test_42);
  tcase_add_test(tc, test_43);
  tcase_add_test(tc, test_44);
  tcase_add_test(tc, test_45);
  tcase_add_test(tc, test_46);
  tcase_add_test(tc, test_47);
  tcase_add_test(tc, test_48);
  tcase_add_test(tc, test_49);
  tcase_add_test(tc, test_50);
  tcase_add_test(tc, test_51);
  tcase_add_test(tc, test_52);
  tcase_add_test(tc, test_53);
  tcase_add_test(tc, test_54);
  tcase_add_test(tc, test_55);
  tcase_add_test(tc, test_56);
  tcase_add_test(tc, test_57);
  tcase_add_test(tc, test_58);
  tcase_add_test(tc, test_59);
  tcase_add_test(tc, test_60);
  tcase_add_test(tc, test_61);
  tcase_add_test(tc, test_62);
  tcase_add_test(tc, test_63);
  tcase_add_test(tc, test_64);
  tcase_add_test(tc, test_65);
  tcase_add_test(tc, test_66);
  tcase_add_test(tc, test_67);
  tcase_add_test(tc, test_68);
  tcase_add_test(tc, test_69);
  tcase_add_test(tc, test_70);
  tcase_add_test(tc, test_71);
  tcase_add_test(tc, test_72);
  tcase_add_test(tc, test_73);
  tcase_add_test(tc, test_74);
  tcase_add_test(tc, test_75);
  tcase_add_test(tc, test_76);
  tcase_add_test(tc, test_77);
  tcase_add_test(tc, test_78);
  tcase_add_test(tc, test_79);
  tcase_add_test(tc, test_80);
  tcase_add_test(tc, test_81);
  tcase_add_test(tc, test_82);
  tcase_add_test(tc, test_83);
  tcase_add_test(tc, test_84);
  tcase_add_test(tc, test_85);
  tcase_add_test(tc, test_86);
  tcase_add_test(tc, test_87);
  tcase_add_test(tc, test_88);
  tcase_add_test(tc, test_89);
  tcase_add_test(tc, test_90);
  tcase_add_test(tc, test_91);
  tcase_add_test(tc, test_92);
  tcase_add_test(tc, test_93);
  tcase_add_test(tc, test_94);
  tcase_add_test(tc, test_95);
  tcase_add_test(tc, test_96);
  tcase_add_test(tc, test_97);
  tcase_add_test(tc, test_98);
  tcase_add_test(tc, test_99);
  tcase_add_test(tc, test_100);
  tcase_add_test(tc, test_101);
  tcase_add_test(tc, test_102);
  tcase_add_test(tc, test_103);
  tcase_add_test(tc, test_104);
  tcase_add_test(tc, test_105);
  tcase_add_test(tc, test_106);
  tcase_add_test(tc, test_107);
  tcase_add_test(tc, test_108);
  tcase_add_test(tc, test_109);
  tcase_add_test(tc, test_110);
  tcase_add_test(tc, test_111);
  tcase_add_test(tc, test_112);
  tcase_add_test(tc, test_113);
  tcase_add_test(tc, test_114);
  tcase_add_test(tc, test_115);
  tcase_add_test(tc, test_116);
  tcase_add_test(tc, test_117);
  tcase_add_test(tc, test_118);
  tcase_add_test(tc, test_119);
  tcase_add_test(tc, test_120);
  tcase_add_test(tc, test_121);
  tcase_add_test(tc, test_122);
  tcase_add_test(tc, test_123);
  tcase_add_test(tc, test_124);
  tcase_add_test(tc, test_125);
  tcase_add_test(tc, test_126);
  tcase_add_test(tc, test_127);
  tcase_add_test(tc, test_128);
  tcase_add_test(tc, test_129);
  tcase_add_test(tc, test_130);
  tcase_add_test(tc, test_131);
  tcase_add_test(tc, test_132);
  tcase_add_test(tc, test_133);
  tcase_add_test(tc, test_134);
  tcase_add_test(tc, test_135);
  tcase_add_test(tc, test_136);
  tcase_add_test(tc, test_137);
  tcase_add_test(tc, test_138);
  tcase_add_test(tc, test_139);
  tcase_add_test(tc, test_140);
  tcase_add_test(tc, test_141);
  tcase_add_test(tc, test_142);
  tcase_add_test(tc, test_143);
  tcase_add_test(tc, test_144);
  tcase_add_test(tc, test_145);
  tcase_add_test(tc, test_146);
  tcase_add_test(tc, test_147);
  tcase_add_test(tc, test_148);
  tcase_add_test(tc, test_149);
  tcase_add_test(tc, test_150);
  tcase_add_test(tc, test_151);
  tcase_add_test(tc, test_152);
  tcase_add_test(tc, test_153);
  tcase_add_test(tc, test_154);
  tcase_add_test(tc, test_155);
  tcase_add_test(tc, test_156);
  tcase_add_test(tc, test_157);
  tcase_add_test(tc, test_158);
  tcase_add_test(tc, test_159);
  tcase_add_test(tc, test_160);
  tcase_add_test(tc, test_161);
  tcase_add_test(tc, test_162);
  tcase_add_test(tc, test_163);
  tcase_add_test(tc, test_164);
  tcase_add_test(tc, test_165);
  tcase_add_test(tc, test_166);
  tcase_add_test(tc, test_167);
  tcase_add_test(tc, test_168);
  tcase_add_test(tc, test_169);
  tcase_add_test(tc, test_170);
  tcase_add_test(tc, test_171);
  tcase_add_test(tc, test_172);
  tcase_add_test(tc, test_173);
  tcase_add_test(tc, test_174);
  tcase_add_test(tc, test_175);
  tcase_add_test(tc, test_176);
  tcase_add_test(tc, test_177);
  tcase_add_test(tc, test_178);
  tcase_add_test(tc, test_179);
  tcase_add_test(tc, test_180);
  tcase_add_test(tc, test_181);
  tcase_add_test(tc, test_182);
  tcase_add_test(tc, test_183);
  tcase_add_test(tc, test_184);
  tcase_add_test(tc, test_185);
  tcase_add_test(tc, test_186);
  tcase_add_test(tc, test_187);
  tcase_add_test(tc, test_188);
  tcase_add_test(tc, test_189);
  tcase_add_test(tc, test_190);
  tcase_add_test(tc, test_191);
  tcase_add_test(tc, test_192);
  tcase_add_test(tc, test_193);
  tcase_add_test(tc, test_194);
  tcase_add_test(tc, test_195);
  tcase_add_test(tc, test_196);
  tcase_add_test(tc, test_197);
  tcase_add_test(tc, test_198);
  tcase_add_test(tc, test_199);
  tcase_add_test(tc, test_200);
  tcase_add_test(tc, test_201);
  tcase_add_test(tc, test_202);
  tcase_add_test(tc, test_203);
  tcase_add_test(tc, test_204);
  tcase_add_test(tc, test_205);
  tcase_add_test(tc, test_206);
  tcase_add_test(tc, test_207);
  tcase_add_test(tc, test_208);
  tcase_add_test(tc, test_209);
  tcase_add_test(tc, test_210);
  tcase_add_test(tc, test_211);
  tcase_add_test(tc, test_212);
  tcase_add_test(tc, test_213);
  tcase_add_test(tc, test_214);
  tcase_add_test(tc, test_215);
  tcase_add_test(tc, test_216);
  tcase_add_test(tc, test_217);
  tcase_add_test(tc, test_218);
  tcase_add_test(tc, test_219);
  tcase_add_test(tc, test_220);
  tcase_add_test(tc, test_221);
  tcase_add_test(tc, test_222);
  tcase_add_test(tc, test_223);
  tcase_add_test(tc, test_224);
  tcase_add_test(tc, test_225);
  tcase_add_test(tc, test_226);
  tcase_add_test(tc, test_227);
  tcase_add_test(tc, test_228);
  tcase_add_test(tc, test_229);
  tcase_add_test(tc, test_230);
  tcase_add_test(tc, test_231);
  tcase_add_test(tc, test_232);
  tcase_add_test(tc, test_233);
  tcase_add_test(tc, test_234);
  tcase_add_test(tc, test_235);
  tcase_add_test(tc, test_236);
  tcase_add_test(tc, test_237);
  tcase_add_test(tc, test_238);
  tcase_add_test(tc, test_239);
  tcase_add_test(tc, test_240);
  tcase_add_test(tc, test_241);
  tcase_add_test(tc, test_242);
  tcase_add_test(tc, test_243);
  tcase_add_test(tc, test_244);
  tcase_add_test(tc, test_245);
  tcase_add_test(tc, test_246);
  tcase_add_test(tc, test_247);
  tcase_add_test(tc, test_248);
  tcase_add_test(tc, test_249);
  tcase_add_test(tc, test_250);
  tcase_add_test(tc, test_251);
  tcase_add_test(tc, test_252);
  tcase_add_test(tc, test_253);
  tcase_add_test(tc, test_254);
  tcase_add_test(tc, test_255);
  tcase_add_test(tc, test_256);
  tcase_add_test(tc, test_257);
  tcase_add_test(tc, test_258);
  tcase_add_test(tc, test_259);
  tcase_add_test(tc, test_260);
  tcase_add_test(tc, test_261);
  tcase_add_test(tc, test_262);
  tcase_add_test(tc, test_263);
  tcase_add_test(tc, test_264);
  tcase_add_test(tc, test_265);
  tcase_add_test(tc, test_266);
  tcase_add_test(tc, test_267);
  tcase_add_test(tc, test_268);
  tcase_add_test(tc, test_269);
  tcase_add_test(tc, test_270);
  tcase_add_test(tc, test_271);
  tcase_add_test(tc, test_272);
  tcase_add_test(tc, test_273);
  tcase_add_test(tc, test_274);
  tcase_add_test(tc, test_275);
  tcase_add_test(tc, test_276);
  tcase_add_test(tc, test_277);
  tcase_add_test(tc, test_278);
  tcase_add_test(tc, test_279);
  tcase_add_test(tc, test_280);
  tcase_add_test(tc, test_281);
  tcase_add_test(tc, test_282);
  tcase_add_test(tc, test_283);
  tcase_add_test(tc, test_284);
  tcase_add_test(tc, test_285);
  tcase_add_test(tc, test_286);
  tcase_add_test(tc, test_287);
  tcase_add_test(tc, test_288);
  tcase_add_test(tc, test_289);
  tcase_add_test(tc, test_290);
  tcase_add_test(tc, test_291);
  tcase_add_test(tc, test_292);
  tcase_add_test(tc, test_293);
  tcase_add_test(tc, test_294);
  tcase_add_test(tc, test_295);
  tcase_add_test(tc, test_296);
  tcase_add_test(tc, test_297);
  tcase_add_test(tc, test_298);
  tcase_add_test(tc, test_299);
  tcase_add_test(tc, test_300);
  tcase_add_test(tc, test_301);
  tcase_add_test(tc, test_302);
  tcase_add_test(tc, test_303);
  tcase_add_test(tc, test_304);
  tcase_add_test(tc, test_305);
  tcase_add_test(tc, test_306);
  tcase_add_test(tc, test_307);
  tcase_add_test(tc, test_308);
  tcase_add_test(tc, test_309);
  tcase_add_test(tc, test_310);
  tcase_add_test(tc, test_311);
  tcase_add_test(tc, test_312);
  tcase_add_test(tc, test_313);
  tcase_add_test(tc, test_314);
  tcase_add_test(tc, test_315);
  tcase_add_test(tc, test_316);
  tcase_add_test(tc, test_317);
  tcase_add_test(tc, test_318);
  tcase_add_test(tc, test_319);
  tcase_add_test(tc, test_320);
  tcase_add_test(tc, test_321);
  tcase_add_test(tc, test_322);
  tcase_add_test(tc, test_323);
  tcase_add_test(tc, test_324);
  tcase_add_test(tc, test_325);
  tcase_add_test(tc, test_326);
  tcase_add_test(tc, test_327);
  tcase_add_test(tc, test_328);
  tcase_add_test(tc, test_329);
  tcase_add_test(tc, test_330);
  tcase_add_test(tc, test_331);
  tcase_add_test(tc, test_332);
  tcase_add_test(tc, test_333);
  tcase_add_test(tc, test_334);
  tcase_add_test(tc, test_335);
  tcase_add_test(tc, test_336);
  tcase_add_test(tc, test_337);
  tcase_add_test(tc, test_338);
  tcase_add_test(tc, test_339);
  tcase_add_test(tc, test_340);
  tcase_add_test(tc, test_341);
  tcase_add_test(tc, test_342);
  tcase_add_test(tc, test_343);
  tcase_add_test(tc, test_344);
  tcase_add_test(tc, test_345);
  tcase_add_test(tc, test_346);
  tcase_add_test(tc, test_347);
  tcase_add_test(tc, test_348);
  tcase_add_test(tc, test_349);
  tcase_add_test(tc, test_350);
  tcase_add_test(tc, test_351);
  tcase_add_test(tc, test_352);
  tcase_add_test(tc, test_353);
  tcase_add_test(tc, test_354);
  tcase_add_test(tc, test_355);
  tcase_add_test(tc, test_356);
  tcase_add_test(tc, test_357);
  tcase_add_test(tc, test_358);
  tcase_add_test(tc, test_359);
  tcase_add_test(tc, test_360);
  tcase_add_test(tc, test_361);
  tcase_add_test(tc, test_362);
  tcase_add_test(tc, test_363);
  tcase_add_test(tc, test_364);
  tcase_add_test(tc, test_365);
  tcase_add_test(tc, test_366);
  tcase_add_test(tc, test_367);
  tcase_add_test(tc, test_368);
  tcase_add_test(tc, test_369);
  tcase_add_test(tc, test_370);
  tcase_add_test(tc, test_371);
  tcase_add_test(tc, test_372);
  tcase_add_test(tc, test_373);
  tcase_add_test(tc, test_374);
  tcase_add_test(tc, test_375);
  tcase_add_test(tc, test_376);
  tcase_add_test(tc, test_377);
  tcase_add_test(tc, test_378);
  tcase_add_test(tc, test_379);
  tcase_add_test(tc, test_380);
  tcase_add_test(tc, test_381);
  tcase_add_test(tc, test_382);
  tcase_add_test(tc, test_383);
  tcase_add_test(tc, test_384);
  tcase_add_test(tc, test_385);
  tcase_add_test(tc, test_386);
  tcase_add_test(tc, test_387);
  tcase_add_test(tc, test_388);
  tcase_add_test(tc, test_389);
  tcase_add_test(tc, test_390);
  tcase_add_test(tc, test_391);
  tcase_add_test(tc, test_392);
  tcase_add_test(tc, test_393);
  tcase_add_test(tc, test_394);
  tcase_add_test(tc, test_395);
  tcase_add_test(tc, test_396);
  tcase_add_test(tc, test_397);
  tcase_add_test(tc, test_398);
  tcase_add_test(tc, test_399);
  tcase_add_test(tc, test_400);
  tcase_add_test(tc, test_401);
  tcase_add_test(tc, test_402);
  tcase_add_test(tc, test_403);
  tcase_add_test(tc, test_404);
  tcase_add_test(tc, test_405);
  tcase_add_test(tc, test_406);
  tcase_add_test(tc, test_407);
  tcase_add_test(tc, test_408);
  tcase_add_test(tc, test_409);
  tcase_add_test(tc, test_410);
  tcase_add_test(tc, test_411);
  tcase_add_test(tc, test_412);
  tcase_add_test(tc, test_413);
  tcase_add_test(tc, test_414);
  tcase_add_test(tc, test_415);
  tcase_add_test(tc, test_416);
  tcase_add_test(tc, test_417);
  tcase_add_test(tc, test_418);
  tcase_add_test(tc, test_419);
  tcase_add_test(tc, test_420);
  tcase_add_test(tc, test_421);
  tcase_add_test(tc, test_422);
  tcase_add_test(tc, test_423);
  tcase_add_test(tc, test_424);
  tcase_add_test(tc, test_425);
  tcase_add_test(tc, test_426);
  tcase_add_test(tc, test_427);
  tcase_add_test(tc, test_428);
  tcase_add_test(tc, test_429);
  tcase_add_test(tc, test_430);
  tcase_add_test(tc, test_431);
  tcase_add_test(tc, test_432);
  tcase_add_test(tc, test_433);
  tcase_add_test(tc, test_434);
  tcase_add_test(tc, test_435);
  tcase_add_test(tc, test_436);
  tcase_add_test(tc, test_437);
  tcase_add_test(tc, test_438);
  tcase_add_test(tc, test_439);
  tcase_add_test(tc, test_440);
  tcase_add_test(tc, test_441);
  tcase_add_test(tc, test_442);
  tcase_add_test(tc, test_443);
  tcase_add_test(tc, test_444);
  tcase_add_test(tc, test_445);
  tcase_add_test(tc, test_446);
  tcase_add_test(tc, test_447);
  tcase_add_test(tc, test_448);
  tcase_add_test(tc, test_449);
  tcase_add_test(tc, test_450);
  tcase_add_test(tc, test_451);
  tcase_add_test(tc, test_452);
  tcase_add_test(tc, test_453);
  tcase_add_test(tc, test_454);
  tcase_add_test(tc, test_455);
  tcase_add_test(tc, test_456);
  tcase_add_test(tc, test_457);
  tcase_add_test(tc, test_458);
  tcase_add_test(tc, test_459);
  tcase_add_test(tc, test_460);
  tcase_add_test(tc, test_461);
  tcase_add_test(tc, test_462);
  tcase_add_test(tc, test_463);
  tcase_add_test(tc, test_464);
  tcase_add_test(tc, test_465);
  tcase_add_test(tc, test_466);
  tcase_add_test(tc, test_467);
  tcase_add_test(tc, test_468);
  tcase_add_test(tc, test_469);
  tcase_add_test(tc, test_470);
  tcase_add_test(tc, test_471);
  tcase_add_test(tc, test_472);
  tcase_add_test(tc, test_473);
  tcase_add_test(tc, test_474);
  tcase_add_test(tc, test_475);
  tcase_add_test(tc, test_476);
  tcase_add_test(tc, test_477);
  tcase_add_test(tc, test_478);
  tcase_add_test(tc, test_479);
  tcase_add_test(tc, test_480);
  tcase_add_test(tc, test_481);
  tcase_add_test(tc, test_482);
  tcase_add_test(tc, test_483);
  tcase_add_test(tc, test_484);
  tcase_add_test(tc, test_485);
  tcase_add_test(tc, test_486);
  tcase_add_test(tc, test_487);
  tcase_add_test(tc, test_488);
  tcase_add_test(tc, test_489);
  tcase_add_test(tc, test_490);
  tcase_add_test(tc, test_491);
  tcase_add_test(tc, test_492);
  tcase_add_test(tc, test_493);
  tcase_add_test(tc, test_494);
  tcase_add_test(tc, test_495);
  tcase_add_test(tc, test_496);
  tcase_add_test(tc, test_497);
  tcase_add_test(tc, test_498);
  tcase_add_test(tc, test_499);
  tcase_add_test(tc, test_500);
  tcase_add_test(tc, test_501);
  tcase_add_test(tc, test_502);
  tcase_add_test(tc, test_503);
  tcase_add_test(tc, test_504);
  tcase_add_test(tc, test_505);
  tcase_add_test(tc, test_506);
  tcase_add_test(tc, test_507);
  tcase_add_test(tc, test_508);
  tcase_add_test(tc, test_509);
  tcase_add_test(tc, test_510);
  tcase_add_test(tc, test_511);
  tcase_add_test(tc, test_512);
  tcase_add_test(tc, test_513);
  tcase_add_test(tc, test_514);
  tcase_add_test(tc, test_515);
  tcase_add_test(tc, test_516);
  tcase_add_test(tc, test_517);
  tcase_add_test(tc, test_518);
  tcase_add_test(tc, test_519);
  tcase_add_test(tc, test_520);
  tcase_add_test(tc, test_521);
  tcase_add_test(tc, test_522);
  tcase_add_test(tc, test_523);
  tcase_add_test(tc, test_524);
  tcase_add_test(tc, test_525);
  tcase_add_test(tc, test_526);
  tcase_add_test(tc, test_527);
  tcase_add_test(tc, test_528);
  tcase_add_test(tc, test_529);
  tcase_add_test(tc, test_530);
  tcase_add_test(tc, test_531);
  tcase_add_test(tc, test_532);
  tcase_add_test(tc, test_533);
  tcase_add_test(tc, test_534);
  tcase_add_test(tc, test_535);
  tcase_add_test(tc, test_536);
  tcase_add_test(tc, test_537);
  tcase_add_test(tc, test_538);
  tcase_add_test(tc, test_539);
  tcase_add_test(tc, test_540);
  tcase_add_test(tc, test_541);
  tcase_add_test(tc, test_542);
  tcase_add_test(tc, test_543);
  tcase_add_test(tc, test_544);
  tcase_add_test(tc, test_545);
  tcase_add_test(tc, test_546);
  tcase_add_test(tc, test_547);
  tcase_add_test(tc, test_548);
  tcase_add_test(tc, test_549);
  tcase_add_test(tc, test_550);
  tcase_add_test(tc, test_551);
  tcase_add_test(tc, test_552);
  tcase_add_test(tc, test_553);
  tcase_add_test(tc, test_554);
  tcase_add_test(tc, test_555);
  tcase_add_test(tc, test_556);
  tcase_add_test(tc, test_557);
  tcase_add_test(tc, test_558);
  tcase_add_test(tc, test_559);
  tcase_add_test(tc, test_560);
  tcase_add_test(tc, test_561);
  tcase_add_test(tc, test_562);
  tcase_add_test(tc, test_563);
  tcase_add_test(tc, test_564);
  tcase_add_test(tc, test_565);
  tcase_add_test(tc, test_566);
  tcase_add_test(tc, test_567);
  tcase_add_test(tc, test_568);
  tcase_add_test(tc, test_569);
  tcase_add_test(tc, test_570);
  tcase_add_test(tc, test_571);
  tcase_add_test(tc, test_572);
  tcase_add_test(tc, test_573);
  tcase_add_test(tc, test_574);
  tcase_add_test(tc, test_575);
  tcase_add_test(tc, test_576);
  tcase_add_test(tc, test_577);
  tcase_add_test(tc, test_578);
  tcase_add_test(tc, test_579);
  tcase_add_test(tc, test_580);
  tcase_add_test(tc, test_581);
  tcase_add_test(tc, test_582);
  tcase_add_test(tc, test_583);
  tcase_add_test(tc, test_584);
  tcase_add_test(tc, test_585);
  tcase_add_test(tc, test_586);
  tcase_add_test(tc, test_587);
  tcase_add_test(tc, test_588);
  tcase_add_test(tc, test_589);
  tcase_add_test(tc, test_590);
  tcase_add_test(tc, test_591);
  tcase_add_test(tc, test_592);
  tcase_add_test(tc, test_593);
  tcase_add_test(tc, test_594);
  tcase_add_test(tc, test_595);
  tcase_add_test(tc, test_596);
  tcase_add_test(tc, test_597);
  tcase_add_test(tc, test_598);
  tcase_add_test(tc, test_599);
  tcase_add_test(tc, test_600);
  tcase_add_test(tc, test_601);
  tcase_add_test(tc, test_602);
  tcase_add_test(tc, test_603);
  tcase_add_test(tc, test_604);
  tcase_add_test(tc, test_605);
  tcase_add_test(tc, test_606);
  tcase_add_test(tc, test_607);
  tcase_add_test(tc, test_608);
  tcase_add_test(tc, test_609);
  tcase_add_test(tc, test_610);
  tcase_add_test(tc, test_611);
  tcase_add_test(tc, test_612);
  tcase_add_test(tc, test_613);
  tcase_add_test(tc, test_614);
  tcase_add_test(tc, test_615);
  tcase_add_test(tc, test_616);
  tcase_add_test(tc, test_617);
  tcase_add_test(tc, test_618);
  tcase_add_test(tc, test_619);
  tcase_add_test(tc, test_620);
  tcase_add_test(tc, test_621);
  tcase_add_test(tc, test_622);
  tcase_add_test(tc, test_623);
  tcase_add_test(tc, test_624);
  tcase_add_test(tc, test_625);
  tcase_add_test(tc, test_626);
  tcase_add_test(tc, test_627);
  tcase_add_test(tc, test_628);
  tcase_add_test(tc, test_629);
  tcase_add_test(tc, test_630);
  tcase_add_test(tc, test_631);
  tcase_add_test(tc, test_632);
  tcase_add_test(tc, test_633);
  tcase_add_test(tc, test_634);
  tcase_add_test(tc, test_635);
  tcase_add_test(tc, test_636);
  tcase_add_test(tc, test_637);
  tcase_add_test(tc, test_638);
  tcase_add_test(tc, test_639);
  tcase_add_test(tc, test_640);
  tcase_add_test(tc, test_641);
  tcase_add_test(tc, test_642);
  tcase_add_test(tc, test_643);
  tcase_add_test(tc, test_644);
  tcase_add_test(tc, test_645);
  tcase_add_test(tc, test_646);
  tcase_add_test(tc, test_647);
  tcase_add_test(tc, test_648);
  tcase_add_test(tc, test_649);
  tcase_add_test(tc, test_650);
  tcase_add_test(tc, test_651);
  tcase_add_test(tc, test_652);
  tcase_add_test(tc, test_653);
  tcase_add_test(tc, test_654);
  tcase_add_test(tc, test_655);
  tcase_add_test(tc, test_656);
  tcase_add_test(tc, test_657);
  tcase_add_test(tc, test_658);
  tcase_add_test(tc, test_659);
  tcase_add_test(tc, test_660);
  tcase_add_test(tc, test_661);
  tcase_add_test(tc, test_662);
  tcase_add_test(tc, test_663);
  tcase_add_test(tc, test_664);
  tcase_add_test(tc, test_665);
  tcase_add_test(tc, test_666);
  tcase_add_test(tc, test_667);
  tcase_add_test(tc, test_668);
  tcase_add_test(tc, test_669);
  tcase_add_test(tc, test_670);
  tcase_add_test(tc, test_671);
  tcase_add_test(tc, test_672);
  tcase_add_test(tc, test_673);
  tcase_add_test(tc, test_674);
  tcase_add_test(tc, test_675);
  tcase_add_test(tc, test_676);
  tcase_add_test(tc, test_677);
  tcase_add_test(tc, test_678);
  tcase_add_test(tc, test_679);
  tcase_add_test(tc, test_680);
  tcase_add_test(tc, test_681);
  tcase_add_test(tc, test_682);
  tcase_add_test(tc, test_683);
  tcase_add_test(tc, test_684);
  tcase_add_test(tc, test_685);
  tcase_add_test(tc, test_686);
  tcase_add_test(tc, test_687);
  tcase_add_test(tc, test_688);
  tcase_add_test(tc, test_689);
  tcase_add_test(tc, test_690);
  tcase_add_test(tc, test_691);
  tcase_add_test(tc, test_692);
  tcase_add_test(tc, test_693);
  tcase_add_test(tc, test_694);
  tcase_add_test(tc, test_695);
  tcase_add_test(tc, test_696);
  tcase_add_test(tc, test_697);
  tcase_add_test(tc, test_698);
  tcase_add_test(tc, test_699);
  tcase_add_test(tc, test_700);
  tcase_add_test(tc, test_701);
  tcase_add_test(tc, test_702);
  tcase_add_test(tc, test_703);
  tcase_add_test(tc, test_704);
  tcase_add_test(tc, test_705);
  tcase_add_test(tc, test_706);
  tcase_add_test(tc, test_707);
  tcase_add_test(tc, test_708);
  tcase_add_test(tc, test_709);
  tcase_add_test(tc, test_710);
  tcase_add_test(tc, test_711);
  tcase_add_test(tc, test_712);
  tcase_add_test(tc, test_713);
  tcase_add_test(tc, test_714);
  tcase_add_test(tc, test_715);
  tcase_add_test(tc, test_716);
  tcase_add_test(tc, test_717);
  tcase_add_test(tc, test_718);
  tcase_add_test(tc, test_719);
  tcase_add_test(tc, test_720);
  tcase_add_test(tc, test_721);
  tcase_add_test(tc, test_722);
  tcase_add_test(tc, test_723);
  tcase_add_test(tc, test_724);
  tcase_add_test(tc, test_725);
  tcase_add_test(tc, test_726);
  tcase_add_test(tc, test_727);
  tcase_add_test(tc, test_728);
  tcase_add_test(tc, test_729);
  tcase_add_test(tc, test_730);
  tcase_add_test(tc, test_731);
  tcase_add_test(tc, test_732);
  tcase_add_test(tc, test_733);
  tcase_add_test(tc, test_734);
  tcase_add_test(tc, test_735);
  tcase_add_test(tc, test_736);
  tcase_add_test(tc, test_737);
  tcase_add_test(tc, test_738);
  tcase_add_test(tc, test_739);
  tcase_add_test(tc, test_740);
  tcase_add_test(tc, test_741);
  tcase_add_test(tc, test_742);
  tcase_add_test(tc, test_743);
  tcase_add_test(tc, test_744);
  tcase_add_test(tc, test_745);
  tcase_add_test(tc, test_746);
  tcase_add_test(tc, test_747);
  tcase_add_test(tc, test_748);
  tcase_add_test(tc, test_749);
  tcase_add_test(tc, test_750);
  tcase_add_test(tc, test_751);
  tcase_add_test(tc, test_752);
  tcase_add_test(tc, test_753);
  tcase_add_test(tc, test_754);
  tcase_add_test(tc, test_755);
  tcase_add_test(tc, test_756);
  tcase_add_test(tc, test_757);
  tcase_add_test(tc, test_758);
  tcase_add_test(tc, test_759);
  tcase_add_test(tc, test_760);
  tcase_add_test(tc, test_761);
  tcase_add_test(tc, test_762);
  tcase_add_test(tc, test_763);
  tcase_add_test(tc, test_764);
  tcase_add_test(tc, test_765);
  tcase_add_test(tc, test_766);
  tcase_add_test(tc, test_767);
  tcase_add_test(tc, test_768);
  tcase_add_test(tc, test_769);
  tcase_add_test(tc, test_770);
  tcase_add_test(tc, test_771);
  tcase_add_test(tc, test_772);
  tcase_add_test(tc, test_773);
  tcase_add_test(tc, test_774);
  tcase_add_test(tc, test_775);
  tcase_add_test(tc, test_776);
  tcase_add_test(tc, test_777);
  tcase_add_test(tc, test_778);
  tcase_add_test(tc, test_779);
  tcase_add_test(tc, test_780);
  tcase_add_test(tc, test_781);
  tcase_add_test(tc, test_782);
  tcase_add_test(tc, test_783);
  tcase_add_test(tc, test_784);
  tcase_add_test(tc, test_785);
  tcase_add_test(tc, test_786);
  tcase_add_test(tc, test_787);
  tcase_add_test(tc, test_788);
  tcase_add_test(tc, test_789);
  tcase_add_test(tc, test_790);
  tcase_add_test(tc, test_791);
  tcase_add_test(tc, test_792);
  tcase_add_test(tc, test_793);
  tcase_add_test(tc, test_794);
  tcase_add_test(tc, test_795);
  tcase_add_test(tc, test_796);
  tcase_add_test(tc, test_797);
  tcase_add_test(tc, test_798);
  tcase_add_test(tc, test_799);
  tcase_add_test(tc, test_800);
  tcase_add_test(tc, test_801);
  tcase_add_test(tc, test_802);
  tcase_add_test(tc, test_803);
  tcase_add_test(tc, test_804);
  tcase_add_test(tc, test_805);
  tcase_add_test(tc, test_806);
  tcase_add_test(tc, test_807);
  tcase_add_test(tc, test_808);
  tcase_add_test(tc, test_809);
  tcase_add_test(tc, test_810);
  tcase_add_test(tc, test_811);
  tcase_add_test(tc, test_812);
  tcase_add_test(tc, test_813);
  tcase_add_test(tc, test_814);
  tcase_add_test(tc, test_815);
  tcase_add_test(tc, test_816);
  tcase_add_test(tc, test_817);
  tcase_add_test(tc, test_818);
  tcase_add_test(tc, test_819);
  tcase_add_test(tc, test_820);
  tcase_add_test(tc, test_821);
  tcase_add_test(tc, test_822);
  tcase_add_test(tc, test_823);
  tcase_add_test(tc, test_824);
  tcase_add_test(tc, test_825);
  tcase_add_test(tc, test_826);
  tcase_add_test(tc, test_827);
  tcase_add_test(tc, test_828);
  tcase_add_test(tc, test_829);
  tcase_add_test(tc, test_830);
  tcase_add_test(tc, test_831);
  tcase_add_test(tc, test_832);
  tcase_add_test(tc, test_833);
  tcase_add_test(tc, test_834);
  tcase_add_test(tc, test_835);
  tcase_add_test(tc, test_836);
  tcase_add_test(tc, test_837);
  tcase_add_test(tc, test_838);
  tcase_add_test(tc, test_839);
  tcase_add_test(tc, test_840);
  tcase_add_test(tc, test_841);
  tcase_add_test(tc, test_842);
  tcase_add_test(tc, test_843);
  tcase_add_test(tc, test_844);
  tcase_add_test(tc, test_845);
  tcase_add_test(tc, test_846);
  tcase_add_test(tc, test_847);
  tcase_add_test(tc, test_848);
  tcase_add_test(tc, test_849);
  tcase_add_test(tc, test_850);
  tcase_add_test(tc, test_851);
  tcase_add_test(tc, test_852);
  tcase_add_test(tc, test_853);
  tcase_add_test(tc, test_854);
  tcase_add_test(tc, test_855);
  tcase_add_test(tc, test_856);
  tcase_add_test(tc, test_857);
  tcase_add_test(tc, test_858);
  tcase_add_test(tc, test_859);
  tcase_add_test(tc, test_860);
  tcase_add_test(tc, test_861);
  tcase_add_test(tc, test_862);
  tcase_add_test(tc, test_863);
  tcase_add_test(tc, test_864);
  tcase_add_test(tc, test_865);
  tcase_add_test(tc, test_866);
  tcase_add_test(tc, test_867);
  tcase_add_test(tc, test_868);
  tcase_add_test(tc, test_869);
  tcase_add_test(tc, test_870);
  tcase_add_test(tc, test_871);
  tcase_add_test(tc, test_872);
  tcase_add_test(tc, test_873);
  tcase_add_test(tc, test_874);
  tcase_add_test(tc, test_875);
  tcase_add_test(tc, test_876);
  tcase_add_test(tc, test_877);
  tcase_add_test(tc, test_878);
  tcase_add_test(tc, test_879);
  tcase_add_test(tc, test_880);
  tcase_add_test(tc, test_881);
  tcase_add_test(tc, test_882);
  tcase_add_test(tc, test_883);
  tcase_add_test(tc, test_884);
  tcase_add_test(tc, test_885);
  tcase_add_test(tc, test_886);
  tcase_add_test(tc, test_887);
  tcase_add_test(tc, test_888);
  tcase_add_test(tc, test_889);
  tcase_add_test(tc, test_890);
  tcase_add_test(tc, test_891);
  tcase_add_test(tc, test_892);
  tcase_add_test(tc, test_893);
  tcase_add_test(tc, test_894);
  tcase_add_test(tc, test_895);
  tcase_add_test(tc, test_896);
  tcase_add_test(tc, test_897);
  tcase_add_test(tc, test_898);
  tcase_add_test(tc, test_899);
  tcase_add_test(tc, test_900);
  tcase_add_test(tc, test_901);
  tcase_add_test(tc, test_902);
  tcase_add_test(tc, test_903);
  tcase_add_test(tc, test_904);
  tcase_add_test(tc, test_905);
  tcase_add_test(tc, test_906);
  tcase_add_test(tc, test_907);
  tcase_add_test(tc, test_908);
  tcase_add_test(tc, test_909);
  tcase_add_test(tc, test_910);
  tcase_add_test(tc, test_911);
  tcase_add_test(tc, test_912);
  tcase_add_test(tc, test_913);
  tcase_add_test(tc, test_914);
  tcase_add_test(tc, test_915);
  tcase_add_test(tc, test_916);
  tcase_add_test(tc, test_917);
  tcase_add_test(tc, test_918);
  tcase_add_test(tc, test_919);
  tcase_add_test(tc, test_920);
  tcase_add_test(tc, test_921);
  tcase_add_test(tc, test_922);
  tcase_add_test(tc, test_923);
  tcase_add_test(tc, test_924);
  tcase_add_test(tc, test_925);
  tcase_add_test(tc, test_926);
  tcase_add_test(tc, test_927);
  tcase_add_test(tc, test_928);
  tcase_add_test(tc, test_929);
  tcase_add_test(tc, test_930);
  tcase_add_test(tc, test_931);
  tcase_add_test(tc, test_932);
  tcase_add_test(tc, test_933);
  tcase_add_test(tc, test_934);
  tcase_add_test(tc, test_935);
  tcase_add_test(tc, test_936);
  tcase_add_test(tc, test_937);
  tcase_add_test(tc, test_938);
  tcase_add_test(tc, test_939);
  tcase_add_test(tc, test_940);
  tcase_add_test(tc, test_941);
  tcase_add_test(tc, test_942);
  tcase_add_test(tc, test_943);
  tcase_add_test(tc, test_944);
  tcase_add_test(tc, test_945);
  tcase_add_test(tc, test_946);
  tcase_add_test(tc, test_947);
  tcase_add_test(tc, test_948);
  tcase_add_test(tc, test_949);
  tcase_add_test(tc, test_950);
  tcase_add_test(tc, test_951);
  tcase_add_test(tc, test_952);
  tcase_add_test(tc, test_953);
  tcase_add_test(tc, test_954);
  tcase_add_test(tc, test_955);
  tcase_add_test(tc, test_956);
  tcase_add_test(tc, test_957);
  tcase_add_test(tc, test_958);
  tcase_add_test(tc, test_959);
  tcase_add_test(tc, test_960);
  tcase_add_test(tc, test_961);
  tcase_add_test(tc, test_962);
  tcase_add_test(tc, test_963);
  tcase_add_test(tc, test_964);
  tcase_add_test(tc, test_965);
  tcase_add_test(tc, test_966);
  tcase_add_test(tc, test_967);
  tcase_add_test(tc, test_968);
  tcase_add_test(tc, test_969);
  tcase_add_test(tc, test_970);
  tcase_add_test(tc, test_971);
  tcase_add_test(tc, test_972);
  tcase_add_test(tc, test_973);
  tcase_add_test(tc, test_974);
  tcase_add_test(tc, test_975);
  tcase_add_test(tc, test_976);
  tcase_add_test(tc, test_977);
  tcase_add_test(tc, test_978);
  tcase_add_test(tc, test_979);
  tcase_add_test(tc, test_980);
  tcase_add_test(tc, test_981);
  tcase_add_test(tc, test_982);
  tcase_add_test(tc, test_983);
  tcase_add_test(tc, test_984);
  tcase_add_test(tc, test_985);
  tcase_add_test(tc, test_986);
  tcase_add_test(tc, test_987);
  tcase_add_test(tc, test_988);
  tcase_add_test(tc, test_989);
  tcase_add_test(tc, test_990);
  tcase_add_test(tc, test_991);
  tcase_add_test(tc, test_992);
  tcase_add_test(tc, test_993);
  tcase_add_test(tc, test_994);
  tcase_add_test(tc, test_995);
  tcase_add_test(tc, test_996);
  tcase_add_test(tc, test_997);
  tcase_add_test(tc, test_998);
  tcase_add_test(tc, test_999);
  tcase_add_test(tc, test_1000);
  tcase_add_test(tc, test_1001);
  tcase_add_test(tc, test_1002);
  tcase_add_test(tc, test_1003);
  tcase_add_test(tc, test_1004);
  tcase_add_test(tc, test_1005);
  tcase_add_test(tc, test_1006);
  tcase_add_test(tc, test_1007);
  tcase_add_test(tc, test_1008);
  tcase_add_test(tc, test_1009);
  tcase_add_test(tc, test_1010);
  tcase_add_test(tc, test_1011);
  tcase_add_test(tc, test_1012);
  tcase_add_test(tc, test_1013);
  tcase_add_test(tc, test_1014);
  tcase_add_test(tc, test_1015);
  tcase_add_test(tc, test_1016);
  tcase_add_test(tc, test_1017);
  tcase_add_test(tc, test_1018);
  tcase_add_test(tc, test_1019);
  tcase_add_test(tc, test_1020);
  tcase_add_test(tc, test_1021);
  tcase_add_test(tc, test_1022);
  tcase_add_test(tc, test_1023);
  tcase_add_test(tc, test_1024);
  suite_add_tcase(s, tc);
  return s;
}
void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  case_test(s21_decimal_suite(), &fail);
  return fail;
}