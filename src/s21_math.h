#include <stdio.h>
#include <stdlib.h>
#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#define S21_PI 3.14159265358979323846264338327950288
#define S21_PI_2 1.570796326794896558
#define S21_PI_4 0.785398163397448309615660845819875721
#define S21_NAN 0.0 / 0.0
#define S21_POS_INF 1.0 / 0.0
#define S21_NEG_INF -1.0 / 0.0
#define EPS 1e-300

#define S21_2_PI 314.1592653589793238462643383279502884197169399375105820974944
#define S21_3_PI 3141.592653589793238462643383279502884197169399375105820974944
#define S21_4_PI 31415.92653589793238462643383279502884197169399375105820974944
#define S21_5_PI 314159.2653589793238462643383279502884197169399375105820974944
#define S21_6_PI 3141592.653589793238462643383279502884197169399375105820974944
#define S21_7_PI 31415926.53589793238462643383279502884197169399375105820974944
#define S21_8_PI 314159265.3589793238462643383279502884197169399375105820974944
#define S21_9_PI 3141592653.589793238462643383279502884197169399375105820974944

long int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_factorial_sincos(int x);
int s21_nan(long double x);
int s21_pos_inf(long double x);
int s21_neg_inf(long double x);
int legal(long double x);
long double illegal(long double x);
double sincospi(long double x);
long double asin_tmp(double x);
long double s21_pow_int(long double base, int exp);

#endif  // SRC_S21_MATH_H_
