#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0;
  if (legal(x)) {
  res = S21_PI_2 - s21_asin(x);
  } else {
    res = S21_NAN;
  }
  return res;
}
