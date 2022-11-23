#include "s21_math.h"

long double s21_atan(double x) {
  long double res;
  if (legal(x)) {
    int minusplus = 0, flag = 0;
    long double tmpx, tmp;
    if (x < 0) x = -x, minusplus = 1;
    if (x > 1) x = 1 / x, flag = 1;
    tmpx = x, res = x, tmp = x;
    if (x == 1) {
      res = S21_PI_4;
    } else {
      int p = 2;
      while (tmp > 0.00000000000001) {
        tmpx *= -x * x * (2 * p - 3) / (2 * p - 1);
        res += tmpx;
        if (tmpx < 0)
          tmp *= -tmpx;
        else
          tmp = tmpx;
        p++;
      }
    }
    if (flag == 1) res = S21_PI_2 - res;
    if (minusplus == 1) res = -res;
  } else {
    res = illegal(x);
  }
  return res;
}
