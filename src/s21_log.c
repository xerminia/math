#include "s21_math.h"

long double s21_log(double x) {
  long double ln = 0;
  if (s21_nan(x) || x < 0) {
    ln = S21_NAN;
  } else if (x == 0) {
    ln = S21_NEG_INF;
  } else {
    double sumchik = (x - 1) / (x + 1);
    for (int n = 1, k = 1; n < 20000000; ++n, k += 2) {
      ln += sumchik / k;
      sumchik *= ((x - 1) / (x + 1)) * ((x - 1) / (x + 1));
    }
  }
  return 2 * ln;
}
