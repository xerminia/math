#include <check.h>
#include <math.h>
#include <string.h>
#include "s21_math.h"

START_TEST(absTest) {
  int a;
  int b;
  a = 0;
  b = 0;
  a = s21_abs(a);
  b = abs(b);
  ck_assert_int_eq(a, b);
  a = 5;
  b = 5;
  a = s21_abs(a);
  b = abs(b);
  ck_assert_int_eq(a, b);
  a = -500;
  b = -500;
  a = s21_abs(a);
  b = abs(b);
  ck_assert_int_eq(a, b);
  a = 100;
  b = 100;
  a = s21_abs(a);
  b = abs(b);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(acosTest) {
  char buf[50], buf2[50];
  double a, b;
  a = -0.9;
  b = -0.9;
  a = s21_acos(a);
  b = acos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 1;
  b = 1;
  a = s21_acos(a);
  b = acos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 0.54;
  b = 0.54;
  a = s21_acos(a);
  b = acos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = -0.5555;
  b = -0.5555;
  a = s21_acos(a);
  b = acos(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0;
  b = 0;
  a = s21_acos(a);
  b = acos(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

START_TEST(asinTest) {
  char buf[50], buf2[50];
  double a, b;
  a = 1;
  b = 1;
  a = s21_asin(a);
  b = asin(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = -1;
  b = -1;
  a = s21_asin(a);
  b = asin(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 0.643;
  b = 0.643;
  a = s21_asin(a);
  b = asin(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = -0.5555;
  b = -0.5555;
  a = s21_asin(a);
  b = asin(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0;
  b = 0;
  a = s21_asin(a);
  b = asin(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

START_TEST(atanTest) {
  double a, b;
  a = 25;
  b = 25;
  a = s21_atan(a);
  b = atan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = -25;
  b = -25;
  a = s21_atan(a);
  b = atan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 1.5;
  b = 1.5;
  a = s21_atan(a);
  b = atan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0.5555;
  b = 0.5555;
  a = s21_atan(a);
  b = atan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 25;
  b = 25;
  a = s21_atan(a);
  b = atan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

START_TEST(ceilTest) {
  double a, b;
  a = 0;
  b = 0;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
  a = 5.5;
  b = 5.5;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
  a = -100.12;
  b = -100.12;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
  a = 0.005;
  b = 0.005;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
  a = 1;
  b = 1;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
  a = -1;
  b = -1;
  a = s21_ceil(a);
  b = ceil(b);
  ck_assert_double_eq(a, b);
}
END_TEST

START_TEST(cosTest) {
  char buf[50], buf2[50];
  double a, b;
  a = 0;
  b = 0;
  a = s21_cos(a);
  b = cos(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 1;
  b = 1;
  a = s21_cos(a);
  b = cos(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 1;
  b = 1;
  a = s21_cos(a);
  b = cos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = -0.12392;
  b = -0.12392;
  a = s21_cos(a);
  b = cos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 100.3;
  b = 100.3;
  a = s21_cos(a);
  b = cos(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(expTest) {
  double a, b;
  a = 0;
  b = 0;
  a = s21_exp(a);
  b = exp(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 5.5;
  b = 5.5;
  a = s21_exp(a);
  b = exp(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = -100.12;
  b = -100.12;
  a = s21_exp(a);
  b = exp(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0.005;
  b = 0.005;
  a = s21_exp(a);
  b = exp(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

START_TEST(fabsTest) {
  double a;
  double b;
  a = 0;
  b = 0;
  a = s21_fabs(a);
  b = fabs(b);
  ck_assert_double_eq(a, b);
  a = 5.5;
  b = 5.5;
  a = s21_fabs(a);
  b = fabs(b);
  ck_assert_double_eq(a, b);
  a = -100.12;
  b = -100.12;
  a = s21_fabs(a);
  b = fabs(b);
  ck_assert_double_eq(a, b);
  a = 0.005;
  b = 0.005;
  a = s21_fabs(a);
  b = fabs(b);
  ck_assert_double_eq(a, b);
}
END_TEST

START_TEST(floorTest) {
  char buf[50], buf2[50];
  double a, b;
  a = 0;
  b = 0;
  a = s21_floor(a);
  b = floor(b);
  ck_assert_double_eq(a, b);
  a = 0.005;
  b = 0.005;
  a = s21_floor(a);
  b = floor(b);
  ck_assert_double_eq(a, b);
  a = -100.12;
  b = -100.12;
  a = s21_floor(a);
  b = floor(b);
  ck_assert_double_eq(a, b);
  a = NAN;
  b = NAN;
  a = s21_floor(a);
  b = floor(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(fmodTest) {
  char buf[50], buf2[50];
  double a, b, c;
  a = S21_NAN;
  b = S21_NAN;
  c = s21_fmod(a, b);
  b = fmod(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 25;
  b = 0;
  c = s21_fmod(a, b);
  b = fmod(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 0;
  b = 1;
  c = s21_fmod(a, b);
  b = fmod(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 25;
  b = S21_POS_INF;
  c = s21_fmod(a, b);
  b = fmod(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = S21_POS_INF;
  b = 1;
  c = s21_fmod(a, b);
  b = fmod(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(logTest) {
  char buf[50], buf2[50];
  double a, b;
  a = 10000;
  b = 10000;
  a = s21_log(a);
  b = log(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 0.1;
  b = 0.1;
  a = s21_log(a);
  b = log(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 1.1;
  b = 1.1;
  a = s21_log(a);
  b = log(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(powTest) {
  char buf[50], buf2[50];
  double a, b, c;
  a = 10;
  b = 10;
  c = s21_pow(a, b);
  b = pow(a, b);
  snprintf(buf, sizeof(buf), "%.4f", c);
  snprintf(buf2, sizeof(buf), "%.4f", b);
  ck_assert_str_eq(buf, buf2);
  a = 10;
  b = 5.5;
  c = s21_pow(a, b);
  b = pow(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
  a = 5;
  b = 20;
  c = s21_pow(a, b);
  b = pow(a, b);
  snprintf(buf, sizeof(buf), "%.0f", c);
  snprintf(buf2, sizeof(buf), "%.0f", b);
  ck_assert_str_eq(buf, buf2);
  a = -1;
  b = -2;
  c = s21_pow(a, b);
  b = pow(a, b);
  snprintf(buf, sizeof(buf), "%.6f", c);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(sinTest) {
  char buf[50], buf2[50];
  double a, b;
  a = 1;
  b = 1;
  a = s21_sin(a);
  b = sin(b);
  snprintf(buf, sizeof(buf), "%.16f", a);
  snprintf(buf2, sizeof(buf), "%.16f", b);
  ck_assert_str_eq(buf, buf2);
  a = -1;
  b = -1;
  a = s21_sin(a);
  b = sin(b);
  snprintf(buf, sizeof(buf), "%.16f", a);
  snprintf(buf2, sizeof(buf), "%.16f", b);
  ck_assert_str_eq(buf, buf2);
  a = -0.1239;
  b = -0.1239;
  a = s21_sin(a);
  b = sin(b);
  snprintf(buf, sizeof(buf), "%.16f", a);
  snprintf(buf2, sizeof(buf), "%.16f", b);
  ck_assert_str_eq(buf, buf2);
  a = 0;
  b = 0;
  a = s21_sin(a);
  b = sin(b);
  snprintf(buf, sizeof(buf), "%.16f", a);
  snprintf(buf2, sizeof(buf), "%.16f", b);
  ck_assert_str_eq(buf, buf2);
  a = 1000.12;
  b = 1000.12;
  a = s21_sin(a);
  b = sin(b);
  snprintf(buf, sizeof(buf), "%.6f", a);
  snprintf(buf2, sizeof(buf), "%.6f", b);
  ck_assert_str_eq(buf, buf2);
}
END_TEST

START_TEST(sqrtTest) {
  double a, b;
  a = 0;
  b = 0;
  a = s21_sqrt(a);
  b = sqrt(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 5.5;
  b = 5.5;
  a = s21_sqrt(a);
  b = sqrt(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 1000.12;
  b = 1000.12;
  a = s21_sqrt(a);
  b = sqrt(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0.005;
  b = 0.005;
  a = s21_sqrt(a);
  b = sqrt(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

START_TEST(tanTest) {
  double a, b;
  a = 1.1;
  b = 1.1;
  a = s21_tan(a);
  b = tan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = -1;
  b = -1;
  a = s21_tan(a);
  b = tan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = -0.12392;
  b = -0.12392;
  a = s21_tan(a);
  b = tan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 0;
  b = 0;
  a = s21_tan(a);
  b = tan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
  a = 10.51;
  b = 10.51;
  a = s21_tan(a);
  b = tan(b);
  ck_assert_ldouble_eq_tol(a, b, 0.000001);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, absTest);
  tcase_add_test(tc1_1, acosTest);
  tcase_add_test(tc1_1, asinTest);
  tcase_add_test(tc1_1, atanTest);
  tcase_add_test(tc1_1, ceilTest);
  tcase_add_test(tc1_1, cosTest);
  tcase_add_test(tc1_1, expTest);
  tcase_add_test(tc1_1, fabsTest);
  tcase_add_test(tc1_1, floorTest);
  tcase_add_test(tc1_1, fmodTest);
  tcase_add_test(tc1_1, logTest);
  tcase_add_test(tc1_1, powTest);
  tcase_add_test(tc1_1, sinTest);
  tcase_add_test(tc1_1, sqrtTest);
  tcase_add_test(tc1_1, tanTest);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
