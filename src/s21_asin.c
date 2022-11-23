#include "s21_math.h"

long double s21_asin(double x) {
  long double res = 0;
  if (legal(x)) {
    if (s21_fabs(x) >= 1) {
      if (s21_fabs(x) == 1) {
        res = x * S21_PI_2;
      } else {
        res = S21_NAN;
      }
    } else if (x >= -0.5 && x <= 0.5) {
      res = asin_tmp(x);
    } else {
      res = S21_PI_2 - 2 * asin_tmp(s21_pow((1 - x) / 2, 0.5));
    }
  } else {
    res = S21_NAN;
  }
  return res;
}

long double asin_tmp(double x) {
  long double sum = x;
  long double res = 0;
  for (int n = 1; s21_fabs(sum) >= 1e-15; n++) {
    res += sum / (2 * n - 1);
    sum *= x * x * (2 * n - 1) * 2 * n / (4 * n * n);
  }
  return res;
}
