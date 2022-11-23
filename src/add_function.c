#include "s21_math.h"

long double s21_factorial_sincos(int x) {
  long double summ = 1;
  for (int i = 1; i <= x; i++) {
    summ *= i;
  }
  return summ;
}

int s21_nan(long double x) { return x != x ? 1 : 0; }

int s21_pos_inf(long double x) { return x == S21_POS_INF ? 1 : 0; }

int s21_neg_inf(long double x) { return x == S21_NEG_INF ? 1 : 0; }

int legal(long double x) {
  int flag;
  if (s21_nan(x) == 0 && s21_pos_inf(x) == 0 && s21_neg_inf(x) == 0) {
    flag = 1;
  } else {
    flag = 0;
  }
  return flag;
}

long double illegal(long double x) {
  long double res = 0;
  if (s21_nan(x)) {
    res = S21_NAN;
  } else if (s21_pos_inf(x)) {
    res = S21_POS_INF;
  } else if (s21_neg_inf(x)) {
    res = S21_NEG_INF;
  }
  return res;
}

double sincospi(long double x) {
  int plusminus = 1;
  if (x < 0) {
    x = -x;
    plusminus = -1;
  }
  while (x > S21_9_PI) x -= S21_9_PI;
  while (x > S21_8_PI) x -= S21_8_PI;
  while (x > S21_7_PI) x -= S21_7_PI;
  while (x > S21_6_PI) x -= S21_6_PI;
  while (x > S21_5_PI) x -= S21_5_PI;
  while (x > S21_4_PI) x -= S21_4_PI;
  while (x > S21_3_PI) x -= S21_3_PI;
  while (x > S21_2_PI) x -= S21_2_PI;
  while (x > 2 * S21_PI) x -= 2 * S21_PI;
  return plusminus * x;
}

long double s21_pow_int(long double base, int exp) {
  long double res = 1;
  if (base == 0 && exp == 0) res = S21_NAN;
  for (int i = 0; i < s21_abs(exp); i++) {
    if (exp > 0)
      res *= base;
    else
      res /= base;
  }
  return res;
}
