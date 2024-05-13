from decimal import *
from textwrap import *


headers = """
#include <check.h>
#include <stdio.h>

#include "../s21_decimal.h"
"""

call_head = """Suite *s21_decimal_suite(void) {
  Suite *s = suite_create("s21_decimal");
  TCase *tc = tcase_create("case_decimal");"""

call_tail="""  suite_add_tcase(s, tc);
  return s;
}"""

tail ="""void case_test(Suite *s, int *fail) {
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
}"""

MAX_VAL = Decimal(int("0xFFFFFFFFFFFFFFFFFFFFFFFF",16))
MINUS_MAX_VAL= Decimal(-int("0xFFFFFFFFFFFFFFFFFFFFFFFF",16))

MIN_VAL=Decimal(10)**(-28)
MINUS_MIN_VAL=-Decimal(10)**(-28)

open_bracket = "{"
close_bracket = "}"
values = ["000000000000000000000000", "000000000000FFFFFFFFFFFF", "000000000000000000000001", "FFFFFFFFFFFFFFFFFFFFFFFF"]
exponents = [0,1,14,28]
signs = [1,-1]

def make_cases():
  cases = list()
  case = str()
  number_test = 0
  for v1 in values:
      for v2 in values:
          for exp_1 in exponents:
              for exp_2 in exponents:
                  for sign_1 in signs:
                      for sign_2 in signs:
                          number_test += 1
                          # Make two decimal numbers with sign, exp, value.
                          dec_1 = Decimal(int("0x{}".format(v1),16)) * (Decimal(10)**(-exp_1)) * Decimal(sign_1)
                          dec_2 = Decimal(int("0x{}".format(v2),16)) * (Decimal(10)**(-exp_2)) * Decimal(sign_2)
                          # Do Math.
                          res_dec = dec_1 + dec_2
                          int_3,int_2,int_1=wrap(v1,8)
                          int_32,int_22,int_12=wrap(v2,8)
                          # Check values are correct.
                          if res_dec > MAX_VAL:
                              case = str(f'START_TEST (test_{number_test})\n{open_bracket}\ns21_decimal val_1 = {open_bracket}{open_bracket}0x{int_1},0x{int_2},0x{int_3},{exp_1}<<16|{1 if sign_1 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal val_2 = {open_bracket}{open_bracket}0x{int_12},0x{int_22},0x{int_32},{exp_2}<<16|{1 if sign_2 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal res = {open_bracket}0{close_bracket};\nint return_val = s21_add(val_1,val_2,&res);\nck_assert_int_eq(return_val, 1);\n{close_bracket}\nEND_TEST\n')
                              cases.append(case)
                          elif res_dec < MINUS_MAX_VAL or (res_dec > MINUS_MIN_VAL and res_dec < Decimal(0)) or (res_dec < MIN_VAL and res_dec > Decimal(0)):
                              case = str(f'START_TEST (test_{number_test})\n{open_bracket}\ns21_decimal val_1 = {open_bracket}{open_bracket}0x{int_1},0x{int_2},0x{int_3},{exp_1}<<16|{1 if sign_1 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal val_2 = {open_bracket}{open_bracket}0x{int_12},0x{int_22},0x{int_32},0x{exp_2}<<16|{1 if sign_2 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal res = {open_bracket}0{close_bracket};\nint return_val = s21_add(val_1,val_2,&res);\nck_assert_int_eq(return_val, 2);\n{close_bracket}\nEND_TEST\n')
                              cases.append(case)
                          else:
                              # Correct output.
                              value_to_compare = "{:f}".format(res_dec)
                              if '.' in value_to_compare:
                                value_to_compare = value_to_compare.rstrip("0")
                              value_to_compare = value_to_compare.rstrip(".")
                              case = str(f'START_TEST (test_{number_test})\n{open_bracket}\ns21_decimal val_1 = {open_bracket}{open_bracket}0x{int_1},0x{int_2},0x{int_3},{exp_1}<<16|{1 if sign_1 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal val_2 = {open_bracket}{open_bracket}0x{int_12},0x{int_22},0x{int_32},{exp_2}<<16|{1 if sign_2 < 0 else 0}<<31{close_bracket}{close_bracket};\ns21_decimal res = {open_bracket}0{close_bracket};\nint return_val = s21_add(val_1,val_2,&res);\nchar string[DEC_STR_LEN+1] = {open_bracket}0{close_bracket};\ns21_from_decimal_to_string(res,string);\nchar cmp[] = "{value_to_compare}";\nck_assert_int_eq(return_val, 0);\nck_assert_str_eq(string, cmp);\n{close_bracket}\nEND_TEST\n')
                              cases.append(case)
  return cases
  """
  START_TEST ({number_test})
  {open_bracket}
      s21_decimal val_1 = {open_bracket}{open_bracket}0x{int_1},0x{int_2},0x{int_3},{exp_1}<<16|{1 if sign_1 < 0 else 0}<<31{close_bracket}{close_bracket};
      s21_decimal val_2 = {open_bracket}{open_bracket}0x{int_12},0x{int_22},0x{int_32},{exp_2}<<16|{1 if sign_2 < 0 else 0}<<31{close_bracket}{close_bracket};
      s21_decimal res = {open_bracket}0{close_bracket};
      int return_val = s21_add(val_1,val_2,&res);
      char string[DEC_STR_LEN+1] = {open_bracket}0{close_bracket};
      s21_from_decimal_to_string(res,string);
      char cmp[] = "{value_to_compare}";
      ck_assert_int_eq(return_val, 0);
      ck_assert_str_eq(string, cmp);
  {close_bracket}
  END_TEST
  """#.format(number_test, open_bracket,int_1,int_2,int_3,exp_1,sign_1, close_bracket,int_12,int_22,int_32,exp_2,sign_2,)
  """
  START_TEST ({number_test})
  {open_bracket}
      s21_decimal val_1 = {open_bracket}{open_bracket}{int_1},{int_2},{int_3},{exp_1}<<16|{1 if sign_1 < 0 else 0}<<31{close_bracket}{close_bracket};
      s21_decimal val_2 = {open_bracket}{open_bracket}{int_12},{int_22},{int_32},{exp_2}<<16|{1 if sign_2 < 0 else 0}<<31{close_bracket}{close_bracket};
      s21_decimal res = {open_bracket}0{close_bracket};
      int return_val = s21_add(val_1,val_2,&res);
      ck_assert_int_eq(return_val, 1);
  {close_bracket}
  END_TEST
  """
def make_calls():
  calls = list()
  call = str()
  number_test = 0
  for v1 in values:
      for v2 in values:
          for exp_1 in exponents:
              for exp_2 in exponents:
                  for sign_1 in signs:
                      for sign_2 in signs:
                        number_test += 1
                        call =  "tcase_add_test(tc, test_{0});\n".format(number_test)
                        calls.append(call)
  return calls
            

def main():
    cases = make_cases()
    call_cases=make_calls()
    file = open("test_add.c", "w")
    file.write(headers)
    for case in cases:
        file.write(case)
        file.write("\n")
    file.write(call_head)
    for call_case in call_cases:
        file.write(call_case)
    file.write(call_tail)
    file.write(tail)
    file.close()

main()