#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double pw, check = 1;
  if (base < 0 && exp != (int)exp) {
    pw = S21_NAN;
  } else if (base == 0 && exp < 0) {
    pw = S21_POS_INF;
  } else {
    if (base < 0) {
      base *= -1;
      check = 0;
    }
    pw = s21_exp(exp * s21_log(base));
    if (check == 0) {
      pw = 1 / pw;
    }
  }
  return pw;
}
