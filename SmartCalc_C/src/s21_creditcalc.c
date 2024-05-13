#include "s21_rpn.h"

void credit(Creditt* result, double total_credit, double term,
                double interest_rate, int type) {
  interest_rate /= 100.0;
  float monthlyInterestRate = interest_rate / 12.0;

  if (type == 1) {
    result->monthly_payment = (total_credit * monthlyInterestRate *
                               pow(1 + monthlyInterestRate, term)) /
                              (pow(1 + monthlyInterestRate, term) - 1);
    result->total_payment = result->monthly_payment * term;
    result->overpay = result->total_payment - total_credit;
  } else {
    result->monthly_payment = total_credit / term;
    result->total_payment = 0.0;
    for (int i = 0; i < term; i++) {
      double interest =
          (total_credit - (i * result->monthly_payment)) * monthlyInterestRate;
      result->total_payment += result->monthly_payment + interest;
    }
    result->overpay = result->total_payment - total_credit;
  }
}
