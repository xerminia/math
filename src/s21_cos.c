#include "s21_math.h"

long double s21_cos(double x) {
  long double res = 0;
  if (legal(x)) {
    x = sincospi(x);
    if (s21_nan(x) == 0) {
      long double i;
      res = 1.0;
      int j = -1;
      int k = 2;
      while (s21_fabs(i = (s21_pow_int(x, k) / s21_factorial_sincos(k))) >
             EPS) {
        res += i * j;
        k += 2;
        j = -1 * j;
      }
    }
  } else {
    res = S21_NAN;
  }
  return res;
}
