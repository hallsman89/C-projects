#include "s21_matrix.h"

long double s21_gauss_inplace_det(matrix_t *A);
void swap_row_no_zero_column(matrix_t *A, int curr_index, long double *det);
int allocate_dynamic_matrix(matrix_t *result);
int s21_check_matrix_is_correct(matrix_t *A);
int s21_check_equal_size(matrix_t *A, matrix_t *B);
int check_for_complements(matrix_t *A, matrix_t *result,
                          matrix_t *minor_matrix);
void fill_minor_matrix(matrix_t *A, int row_remove, int col_remove,
                       matrix_t *result);

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int output;
  if (columns > 0 && rows > 0 && result) {
    result->columns = columns;
    result->rows = rows;
    output = allocate_dynamic_matrix(result);
  } else if (result) {
    output = INCORRECT_MATRIX;
    result->matrix = NULL;
  } else {
    output = INCORRECT_MATRIX;
  }
  return output;
}

void s21_remove_matrix(matrix_t *A) {
  if (A->matrix) {
    free(A->matrix);
    A->matrix = NULL;
  }
  A->columns = 0;
  A->rows = 0;
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int output = s21_check_matrix_is_correct(A) && s21_check_matrix_is_correct(B);
  if (output == SUCCESS) {
    output &= s21_check_equal_size(A, B);
  }
  for (int row_index = 0; (output == SUCCESS) && (row_index < A->rows);
       row_index++) {
    for (int col_index = 0; (col_index < A->columns) && (output == SUCCESS);
         col_index++) {
      double curr_el_a = A->matrix[row_index][col_index];
      double curr_el_b = B->matrix[row_index][col_index];
      output &= (fabs(curr_el_a - curr_el_b) < 1e-7);
    }
  }
  return output;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int output =
      !(s21_check_matrix_is_correct(A) && s21_check_matrix_is_correct(B));
  if ((output == OK) && (!s21_check_equal_size(A, B))) {
    output = CALCULATION_ERROR;
  }
  if (output == OK) {
    output = s21_create_matrix(A->rows, A->columns, result);
  }
  for (int row = 0; (output == OK) && (row < A->rows); row++) {
    for (int col = 0; col < A->columns; col++) {
      result->matrix[row][col] = A->matrix[row][col] + B->matrix[row][col];
    }
  }
  return output;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int output =
      !(s21_check_matrix_is_correct(A) && s21_check_matrix_is_correct(B));
  if ((output == OK) && (!s21_check_equal_size(A, B))) {
    output = CALCULATION_ERROR;
  }
  if (output == OK) {
    output = s21_create_matrix(A->rows, A->columns, result);
  }
  for (int row = 0; (output == OK) && (row < A->rows); row++) {
    for (int col = 0; col < A->columns; col++) {
      result->matrix[row][col] = A->matrix[row][col] - B->matrix[row][col];
    }
  }
  return output;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int output = !s21_check_matrix_is_correct(A);
  if (output == OK) {
    output = s21_create_matrix(A->rows, A->columns, result);
  }
  for (int row = 0; (output == OK) && (row < A->rows); row++) {
    for (int col = 0; col < A->columns; col++) {
      result->matrix[row][col] = number * A->matrix[row][col];
    }
  }
  return output;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int output =
      !(s21_check_matrix_is_correct(A) && s21_check_matrix_is_correct(B));
  if (output == OK && (A->columns != B->rows)) {
    output = CALCULATION_ERROR;
  } else if (output == OK) {
    output = s21_create_matrix(A->rows, B->columns, result);
  }
  for (int row1 = 0; (output == OK) && (row1 < A->rows); row1++) {
    for (int col2 = 0; col2 < B->columns; col2++) {
      for (int row2 = 0; row2 < B->rows; row2++) {
        result->matrix[row1][col2] +=
            A->matrix[row1][row2] * B->matrix[row2][col2];
      }
    }
  }
  return output;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
  int output = !s21_check_matrix_is_correct(A);
  if (output == OK) {
    output = s21_create_matrix(A->columns, A->rows, result);
  }
  for (int col = 0; (output == OK) && (col < A->columns); col++) {
    for (int row = 0; row < A->rows; row++) {
      result->matrix[col][row] = A->matrix[row][col];
    }
  }
  return output;
}

void swap_row_no_zero_column(matrix_t *A, int curr_index, long double *det) {
  int j = curr_index;
  while ((j < A->rows) && (fabs(A->matrix[j][curr_index]) < 1e-15)) {
    j++;
  }
  if (j == A->rows) {
    *det = 0;
  } else {
    for (int k = curr_index; k < A->rows; k++) {
      double temp = A->matrix[curr_index][k];
      A->matrix[curr_index][k] = A->matrix[j][k];
      A->matrix[j][k] = temp;
    }
    *det = -*det;
  }
}

long double s21_gauss_inplace_det(matrix_t *A) {
  long double det = 1;
  for (int i = 0; (i < A->rows) && fabsl(det) > 1e-15; i++) {
    if (fabs(A->matrix[i][i]) < 1e-15) {
      swap_row_no_zero_column(A, i, &det);
    }
    det *= (long double)A->matrix[i][i];
    long double divisor = (long double)A->matrix[i][i];
    for (int j = i + 1; fabsl(det) > 1e-15 && j < A->rows; j++) {
      long double multiplier = A->matrix[j][i];
      for (int k = i; k < A->columns; k++) {
        A->matrix[j][k] -=
            (double)((long double)A->matrix[i][k] * multiplier / divisor);
      }
    }
  }
  return det;
}

int s21_determinant(matrix_t *A, double *result) {
  int output = !s21_check_matrix_is_correct(A);
  if (output == OK) {
    output = 2 * (A->rows != A->columns);
  }
  if (output == OK) {
    matrix_t tmp = {.matrix = NULL};
    output = s21_create_matrix(A->rows, A->rows, &tmp);
    for (int i = 0; (output == OK) && (i < A->rows); i++) {
      for (int j = 0; j < A->rows; j++) {
        tmp.matrix[i][j] = A->matrix[i][j];
      }
    }
    if (output == OK) {
      long double tmp_res = s21_gauss_inplace_det(&tmp);
      *result = (double)tmp_res;
    }
    s21_remove_matrix(&tmp);
  }
  return output;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  matrix_t minor_matrix = {.matrix = NULL};
  int output = check_for_complements(A, result, &minor_matrix);
  if (output == OK && A->rows == 1) {
    result->matrix[0][0] = 1;
  } else if (output == OK) {
    double minor_value = 0;
    for (int row_index = 0; row_index < A->rows; row_index++) {
      for (int col_index = 0; col_index < A->rows; col_index++) {
        fill_minor_matrix(A, row_index, col_index, &minor_matrix);
        output = s21_determinant(&minor_matrix, &minor_value);
        if ((row_index + col_index) % 2 == 1) {
          minor_value *= -1;
        }
        if (output == OK) result->matrix[row_index][col_index] = minor_value;
      }
    }
  }
  s21_remove_matrix(&minor_matrix);
  return output;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int output = !s21_check_matrix_is_correct(A);
  double det = 0;
  output = output ? output : 2 * (A->rows != A->columns);
  output = output ? output : s21_determinant(A, &det);
  output = output ? output : 2 * (fabs(det) < 1e-15);
  matrix_t cofactor_matrix = {.matrix = NULL};
  matrix_t transposed_cofactor_matrix = {.matrix = NULL};
  if (output == OK) {
    output = s21_calc_complements(A, &cofactor_matrix);
    output |= s21_transpose(&cofactor_matrix, &transposed_cofactor_matrix);
    s21_remove_matrix(&cofactor_matrix);
  }
  if (output == OK) {
    s21_mult_number(&transposed_cofactor_matrix, 1 / det, result);
  }
  s21_remove_matrix(&transposed_cofactor_matrix);
  return output;
}

int allocate_dynamic_matrix(matrix_t *result) {
  int output = OK;
  int rows = result->rows;
  int cols = result->columns;
  double **matrix = (double **)malloc((rows) * (cols) * sizeof(double) +
                                      (rows) * sizeof(double *));
  if (matrix) {
    double *ptr = (double *)((matrix) + rows);
    for (int row_index = 0; row_index < rows; row_index++) {
      matrix[row_index] = ptr + (cols)*row_index;
      for (int col_index = 0; col_index < cols; col_index++) {
        matrix[row_index][col_index] = 0;
      }
    }
    result->matrix = matrix;
  } else {
    result->matrix = NULL;
    output = INCORRECT_MATRIX;
  }
  return output;
}

int s21_check_matrix_is_correct(matrix_t *A) {
  int output = (A != NULL);
  if (output) {
    output &= (A->columns > 0) && (A->rows > 0) && (A->matrix != NULL);
  }
  return output;
}

int s21_check_equal_size(matrix_t *A, matrix_t *B) {
  return (A->columns == B->columns) && (A->rows == B->rows);
}

int check_for_complements(matrix_t *A, matrix_t *result,
                          matrix_t *minor_matrix) {
  int output = !s21_check_matrix_is_correct(A);
  if (output == OK && (A->rows != A->columns)) output = CALCULATION_ERROR;
  if (output == OK) output = s21_create_matrix(A->rows, A->rows, result);
  if ((output == OK) && (A->rows > 1)) {
    output = s21_create_matrix(A->rows - 1, A->rows - 1, minor_matrix);
  }
  return output;
}

void fill_minor_matrix(matrix_t *A, int row_remove, int col_remove,
                       matrix_t *result) {
  for (int row = 0; row < row_remove; row++) {
    for (int col = 0; col < col_remove; col++) {
      result->matrix[row][col] = A->matrix[row][col];
    }
    for (int col = col_remove + 1; col < A->rows; col++) {
      result->matrix[row][col - 1] = A->matrix[row][col];
    }
  }
  for (int row = row_remove + 1; row < A->rows; row++) {
    for (int col = 0; col < col_remove; col++) {
      result->matrix[row - 1][col] = A->matrix[row][col];
    }
    for (int col = col_remove + 1; col < A->rows; col++) {
      result->matrix[row - 1][col - 1] = A->matrix[row][col];
    }
  }
}
