#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res;
  if ((x == S21_POS_INF || x == S21_NEG_INF) &&
      (y == S21_POS_INF || y == S21_NEG_INF)) {
    res = S21_NAN;
  } else if (y == S21_POS_INF || y == S21_NEG_INF) {
    res = x;
  } else if (y == -0.0 || y == S21_NAN || y == -S21_NAN) {
    res = S21_NAN;
  } else {
    if ((x / y) < 0) {
      res = x - y * (s21_ceil(x / y));
    } else {
      res = x - y * (s21_floor(x / y));
    }
  }
  return res;
}
