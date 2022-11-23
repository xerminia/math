CC = gcc
CFLAGS = -Wall -Werror -Wextra
FLAG = --coverage
CFILE = test.c s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c \
	s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c \
	s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c add_function.c
OFILE = s21_abs.o s21_acos.o s21_asin.o s21_atan.o s21_ceil.o \
	s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o \
	s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o add_function.o
OS := $(shell uname -s)

all:	clean s21_math.a test

s21_abs.o:
	$(CC) $(CFLAGS) -c s21_abs.c -o s21_abs.o

s21_acos.o:
	$(CC) $(CFLAGS) -c s21_acos.c -o s21_acos.o

s21_asin.o:
	$(CC) $(CFLAGS) -c s21_asin.c -o s21_asin.o

s21_atan.o:
	$(CC) $(CFLAGS) -c s21_atan.c -o s21_atan.o

s21_ceil.o:
	$(CC) $(CFLAGS) -c s21_ceil.c -o s21_ceil.o

s21_cos.o:
	$(CC) $(CFLAGS) -c s21_cos.c -o s21_cos.o

s21_exp.o:
	$(CC) $(CFLAGS) -c s21_exp.c -o s21_exp.o

s21_fabs.o:
	$(CC) $(CFLAGS) -c s21_fabs.c -o s21_fabs.o

s21_floor.o:
	$(CC) $(CFLAGS) -c s21_floor.c -o s21_floor.o

s21_fmod.o:
	$(CC) $(CFLAGS) -c s21_fmod.c -o s21_fmod.o

s21_log.o:
	$(CC) $(CFLAGS) -c s21_log.c -o s21_log.o

s21_pow.o:
	$(CC) $(CFLAGS) -c s21_pow.c -o s21_pow.o

s21_sin.o:
	$(CC) $(CFLAGS) -c s21_sin.c -o s21_sin.o

s21_sqrt.o:
	$(CC) $(CFLAGS) -c s21_sqrt.c -o s21_sqrt.o

s21_tan.o:
	$(CC) $(CFLAGS) -c s21_tan.c -o s21_tan.o

add_function.o:
	$(CC) $(CFLAGS) -c add_function.c -o add_function.o

s21_math.a: $(OFILE)
	ar rcs s21_math.a $(OFILE)
	cp s21_math.a libs21_math
	cp s21_math.a ls21_math

test: s21_math.a
ifeq ($(OS), Darwin)
	$(CC) $(CFLAGS) -c test.c -o test.o -lcheck
	$(CC) $(CFLAGS) test.o s21_math.a -o test -lcheck
	./test
else
	$(CC) $(CFLAGS) test.c s21_math.a -o test -lcheck -lsubunit -lrt -lpthread -lm
	./test
endif

gcov:
ifeq ($(OS), Darwin)
	$(CC) $(CFLAGS) $(FLAG) $(CFILE) $(LCOV) -o test -lcheck
else
	$(CC) $(CFLAGS) $(FLAG) $(CFILE) $(LCOV) -o test -lcheck -lsubunit -lrt -lpthread -lm
endif

gcov_report: gcov
	./test
	lcov -t “test” -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

open:
	open report/index.html

clean:
	rm -rf *o  *.gc* report *.a test libs21_math ls21_math

cl:	clean
	rm -rf test.c

re: gcov_report
	open report/index.html

cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
