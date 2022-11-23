#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = S21_NAN;
  if (x < 0) {
    res = (int)x;
  } else if (x != (int)x) {
    res = (int)x + 1;
  }
  if (x < 0 && x > -1)
    res = -0.0;
  else if (x == (int)x)
    res = x;
  return res;
}
