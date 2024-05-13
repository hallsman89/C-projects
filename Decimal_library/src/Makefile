FLAGS = -Wall -Werror -Wextra -std=c11
LFLAGS = -lcheck -lm -lpthread
HEADERS = s21_decimal.h


# Other linux
ifeq ($(UNAME),Linux)
	LFLAGS=-lcheck -lm -lpthread -lrt -lgcov
endif


TESTS = $(wildcard unit_tests/test.c)

SOURCES_ALL = s21_arithmetic.c s21_comparison.c s21_converters.c s21_getset.c s21_other.c s21_utils.c

OBJ_LIBRARY := $(patsubst %.c, %.o, $(SOURCES_ALL))

all: clean s21_decimal.a gcov_report

test: s21_decimal.a
	gcc $(FLAGS) $(TESTS) $(SOURCES_ALL) $(LFLAGS) -L. s21_decimal.a -o test
	rm -rf *.o

s21_decimal.a: $(OBJ_LIBRARY) $(HEADERS)
	ar rcs s21_decimal.a $(OBJ_LIBRARY)
	ranlib s21_decimal.a
	rm -rf *.o

gcov_report: clean add_coverage test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

clean:
	rm -rf *.o gcov_report *.a *.gcda *.gcno test test.info
	rm -rf report

add_coverage:
	$(eval FLAGS += --coverage)