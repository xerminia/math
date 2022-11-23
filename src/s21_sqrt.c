#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = x;
  if (x < 0)
    res = S21_NAN;
  else if (x == -0.0)
    res = -0.0;
  else
    res = s21_pow(res, 0.5);
  return res;
}
