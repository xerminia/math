#include "s21_math.h"

long double s21_floor(double x) {
  long double res;
  if (legal(x)) {
    if (x > 0) {
      x = (int)x;
    } else if (x != (int)x) {
      x = (int)x - 1;
    }
    res = x;
  } else {
    res = illegal(x);
  }
  return res;
}
