#include "s21_math.h"

long int s21_abs(int x) {
  if (x < 0) {
    x = -x;
  }
  return x;
}
