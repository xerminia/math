#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  if (legal(x)) {
    x = sincospi(x);
    if (s21_nan(x) == 0) {
      long double tmp;
      long double sumchik = x;
      int i = 3, j = 2, k = -1;
      while (s21_fabs(tmp = s21_pow_int(x, i) / s21_factorial_sincos(i)) >
             EPS) {
        sumchik += tmp * k;
        i += j;
        k = -1 * k;
      }
      res = sumchik;
    }
  } else {
    res = S21_NAN;
  }
  return res;
}
