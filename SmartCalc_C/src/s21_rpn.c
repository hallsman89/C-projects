#include "s21_rpn.h"

char *solve(const char *infix, char *Cstring) {
  Stack *input_expression = notation((const char *)infix);
  double res = 0.0;
  if (input_expression == NULL)
    strcpy(Cstring, "ERROR");
  else {
    res = calculate(input_expression);
    if (isnan(res))
      strcpy(Cstring, "NAN");
    else if (isinf(res))
      strcpy(Cstring, "INF");
    else if (-isinf(res))
      strcpy(Cstring, "-INF");
    else
      sprintf(Cstring, "%.7f", res);
    destroy(input_expression);
  }
  return Cstring;
}

Stack *notation(const char *expression) {
  Stack *opers = NULL, *output = NULL;
  valid check = {0};
  check.func = '1';
  for (int i = 0; i < strlen(expression) && !check.status; i++) {
    if (check.bracket < 0 || check.fmod_brackets < 0)
      check.status = 1;
    else if (check.is_func && !check_function(expression, &i, &check)) {
      opers = push_greaterPrecedenceToOutput(opers, &output, check.func);
      opers = push_functionToStack(&check, opers);
      opers = push(opers, 0, '(');
    } else if ((expression[i] == ' ') ||
               (check_startOfFunction(expression, i, &check)))
      ;
    else if (expression[i] == ',')
      parse_comma(&check);
    else if (is_digit(expression[i]) && !parse_number(&check)) {
      output = check_number(expression, &i, &check, output);
    } else if ((expression[i] == 'x' || expression[i] == 'X') &&
               !parse_number(&check)) {
      output = push(output, 0, 'X');
    } else if ((expression[i] == '*' || expression[i] == '/' ||
                expression[i] == '^') &&
               !parse_oper(&check, expression[i])) {
      opers = push_greaterPrecedenceToOutput(opers, &output, expression[i]);
      opers = push_functionToStack(&check, opers);
    } else if (expression[i] == '+' || expression[i] == '-') {
      char sign = parse_pm(expression, &check, &i);
      if (!(check.func == 'u' && sign == '+')) {
        opers = push_greaterPrecedenceToOutput(opers, &output, check.func),
        opers = push_functionToStack(&check, opers);
      }
    } else if (expression[i] == '!' && check.was_variable) {
      check.func = expression[i];
      opers = push_greaterPrecedenceToOutput(opers, &output, check.func);
      opers = push_functionToStack(&check, opers);
    } else if (expression[i] == '(' && !check.was_variable) {
      opers = parse_openBracket(opers, &check);
    } else if (expression[i] == ')' && check.was_variable) {
      parse_closedBracket(&output, &opers, &check);
    } else
      check.status = 1;
    if (check.fmod && check.fmod_comma && !check.fmod_brackets) {
      check.fmod = 0, check.fmod_comma = 0;
    }
  }
  Stack *reverse_expression = reverse_notation(opers, output, &check);
  return reverse_expression;
}

int is_digit(char ch) { return ((ch >= '0' && ch <= '9') || ch == '.'); }

void parse_comma(valid *check) {
  (check->was_variable && check->fmod && !check->fmod_comma)
      ? (check->was_variable = 0, check->fmod_comma = 1, check->was_oper = 1)
      : (check->status = 1);
}

int parse_number(valid *check) {
  check->was_variable
      ? (check->status = 1)
      : (check->was_variable = 1, check->was_pm = 0, check->was_oper = 0,
         check->was_function = 0, check->was_bracket = 0);
  return check->status;
}

int parse_oper(valid *check, char ope) {
  (check->was_oper || check->was_pm || check->was_function)
      ? (check->status = 1)
      : (check->was_oper = 1, check->was_variable = 0, check->was_pm = 0,
         check->was_bracket = 0, check->func = ope);
  return check->status;
}

char parse_pm(const char *expression, valid *check, int *i) {
  char sign = expression[*i];
  int j = *i;
  while ((*i + 1) < strlen(expression) &&
         (expression[*i + 1] == '+' || expression[*i + 1] == '-' ||
          expression[*i + 1] == ' ')) {
    if (expression[*i + 1] != ' ')
      sign = sign == '-'               ? expression[*i + 1] == '-' ? '+' : '-'
             : expression[*i + 1] == '-' ? '-'
                                       : '+';
    (*i)++;
  }
  (check->was_bracket || check->was_oper || j == 0) ? (check->func = 'u')
                                                    : (check->func = sign);
  check->was_pm = 1, check->was_variable = 0, check->was_function = 0,
  check->was_bracket = 0;
  return sign;
}

Stack *parse_openBracket(Stack *opers, valid *check) {
  opers = push(opers, 0, '(');
  check->bracket++, check->was_bracket = 1;
  if (check->fmod) check->fmod_brackets++;
  return opers;
}

void parse_closedBracket(Stack **output, Stack **opers, valid *check) {
  while ((*opers)->oper != '(') {
    *output = push(*output, (*opers)->value, (*opers)->oper);
    *opers = pop(*opers);
  }
  *opers = pop(*opers);
  check->bracket--;
  if (check->fmod) check->fmod_brackets--;
}

Stack *push_greaterPrecedenceToOutput(Stack *opers, Stack **output,
                                      char goes_in) {
  while (opers != NULL &&
         (check_precedence(goes_in) <= check_precedence(opers->oper) &&
          !(goes_in == '^' && opers->oper == '^'))) {
    *output = push(*output, 0, opers->oper);
    opers = pop(opers);
  }
  return opers;
}

int check_precedence(char ch) {
  int prec = 0;
  if (ch == 'u')
    prec = 5;
  else if (ch == '!')
    prec = 4;
  else if (ch == '^')
    prec = 3;
  else if (ch == 'C' || ch == 'S' || ch == 'T' || ch == 'c' || ch == 's' ||
           ch == 't' || ch == 'q' || ch == 'o' || ch == 'm' || ch == 'n')
    prec = 6;
  else if (ch == '*' || ch == '/')
    prec = 2;
  else if (ch == '+' || ch == '-')
    prec = 1;
  return prec;
}

Stack *push_functionToStack(valid *check, Stack *opers) {
  if (check->is_trig) {
    if (check->func == 'c' || check->func == 'C')
      opers = push(opers, 0, 'C');
    else if (check->func == 's' || check->func == 'S')
      opers = push(opers, 0, 'S');
    else if (check->func == 't' || check->func == 'T')
      opers = push(opers, 0, 'T');
  } else if (check->func == 'c' || check->func == 'C')
    opers = push(opers, 0, 'c');
  else if (check->func == 's' || check->func == 'S')
    opers = push(opers, 0, 's');
  else if (check->func == 't' || check->func == 'T')
    opers = push(opers, 0, 't');
  else if (check->func == 'q')
    opers = push(opers, 0, 'q');
  else if (check->func == 'm' || check->func == 'M')
    opers = push(opers, 0, 'm');
  else if (check->func == 'o')
    opers = push(opers, 0, 'o');
  else if (check->func == 'n')
    opers = push(opers, 0, 'n');
  else
    opers = push(opers, 0, check->func);
  check->is_trig = 0;
  return opers;
}

Stack *check_number(const char *expression, int *i, valid *check, Stack *output) {
  bool was_point = 0;
  char *number = calloc(strlen(expression), sizeof(char));
  int j = 0;
  while (*i < strlen(expression) &&
         (is_digit(expression[*i]) || expression[*i] == '.')) {
    if (expression[*i] == '.') {
      if (was_point)
        check->status = 1;
      else
        was_point = 1;
    }
    number[j++] = expression[(*i)++];
  }
  (*i)--;
  number[j] = '\0';
  Stack *newhead = push(output, atof(number), 'f');
  free(number);
  return newhead;
}

Stack *reverse_notation(Stack *opers, Stack *output, valid *check) {
  Stack *reverse_expression = NULL;
  if (check->bracket || check->fmod || !check->was_variable) {
    check->status = 1;
  }
  if (check->status) {
    destroy(opers);
    destroy(output);
    return NULL;
  }
  while (opers != NULL && opers->oper != 'f') {
    output = push(output, opers->value, opers->oper);
    opers = pop(opers);
  }
  destroy(opers);
  while (output != NULL) {
    reverse_expression = push(reverse_expression, output->value, output->oper);
    output = pop(output);
  }
  destroy(output);
  return reverse_expression;
}

int check_startOfFunction(const char *expression, int i, valid *check) {
  int was_it = 0;
  if (expression[i] == 'A' || expression[i] == 'C' || expression[i] == 'S' ||
      expression[i] == 'T' || expression[i] == 'a' || expression[i] == 'c' ||
      expression[i] == 's' || expression[i] == 't' || expression[i] == 'm' ||
      expression[i] == 'M' || expression[i] == 'l' || expression[i] == 'L') {
    was_it = 1;
    (check->was_variable) ? (check->status = 1) : (check->is_func = 1);
    check->func = expression[i];
    check->was_oper = 0, check->was_pm = 0, check->was_variable = 0;
  }
  return was_it;
}

int check_function(const char *expression, int *i, valid *check) {
  if (check->func == 'A' || check->func == 'a') {
    check->func = expression[(*i)++];
    check->is_trig = 1;
  }
  if (check->func == 'C' || check->func == 'c') {
    (*i + 2) < strlen(expression) &&
            (expression[*i] == 'o' || expression[*i] == 'O') &&
            (expression[*i + 1] == 's' || expression[*i + 1] == 'S') &&
            expression[*i + 2] == '('
        ? (*i += 2, check->is_func = 0, check->bracket++)
        : (check->status = 1);
  } else if (check->func == 'S' || check->func == 's') {
    (*i + 2) < strlen(expression) &&
            (expression[*i] == 'i' || expression[*i] == 'I') &&
            (expression[*i + 1] == 'n' || expression[*i + 1] == 'N') &&
            expression[*i + 2] == '('
        ? (*i += 2, check->is_func = 0, check->bracket++)
    : (*i + 3) < strlen(expression) && !check->is_trig &&
            (expression[*i] == 'q' || expression[*i] == 'Q') &&
            (expression[*i + 1] == 'r' || expression[*i + 1] == 'R') &&
            (expression[*i + 2] == 't' || expression[*i + 2] == 'T') &&
            expression[*i + 3] == '('
        ? (*i += 3, check->is_func = 0, check->func = 'q', check->bracket++)
        : (check->status = 0);
  } else if (check->func == 't' || check->func == 'T') {
    (*i + 2) < strlen(expression) &&
            (expression[*i] == 'a' || expression[*i] == 'A') &&
            (expression[*i + 1] == 'n' || expression[*i + 1] == 'N') &&
            expression[*i + 2] == '('
        ? (*i += 2, check->is_func = 0, check->bracket++)
        : (check->status = 1);
  } else if ((check->func == 'M' || check->func == 'm') && !check->is_trig) {
    (*i + 2) < strlen(expression) &&
            (expression[*i] == 'o' || expression[*i] == 'O') &&
            (expression[*i + 1] == 'd' || expression[*i + 1] == 'D') &&
            expression[*i + 2] == '('
        ? (*i += 2, check->is_func = 0, check->bracket++, check->fmod = 1,
           check->fmod_brackets++)
        : (check->status = 1);
  } else if ((check->func == 'L' || check->func == 'l') && !check->is_trig)
    ((*i + 2) < strlen(expression) &&
     (expression[*i] == 'o' || expression[*i] == 'O') &&
     (expression[*i + 1] == 'g' || expression[*i + 1] == 'G') &&
     (expression[*i + 2] == '('))
        ? (*i += 2, check->is_func = 0, check->func = 'o', check->bracket++)
    : (*i + 1) < strlen(expression) &&
            (expression[*i] == 'N' || expression[*i] == 'n')
        ? (*i += 1, check->is_func = 0, check->func = 'n', check->bracket++)
        : (check->status = 1);
  else
    check->status = 1;
  if (!check->status) {
    check->was_function = 1, check->was_bracket = 1;
  }
  return check->status;
}
// pow is right associative, (doesnt go away with same prior)