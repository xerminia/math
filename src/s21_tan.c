#include "s21_math.h"

long double s21_tan(double x) {
  long double res = 0;
  long double res_sin = s21_sin(x);
  long double res_cos = s21_cos(x);
  if (legal(x)) {
    res = res_sin / res_cos;
  } else {
    res = S21_NAN;
  }
  return res;
}
