#include "s21_math.h"

long double s21_exp(double x) {
  long double sumchik = 0, check = 1;
  if (x < 0) {
    x *= -1;
    check = 0;
  }
  if (s21_nan(x)) {
    sumchik = x;
  } else {
    long double pr = 1, fac = 1;
    for (int i = 1; (pr / fac) >= 1e-10; ++i) {
      sumchik += pr / fac;
      pr *= x;
      fac *= i;
    }
  }
  if (check == 0) (sumchik = 1 / sumchik);
  return sumchik;
}
