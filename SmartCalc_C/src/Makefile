FLAGS=-lcheck -lm -lpthread
SOURCES=s21_*.c
OBJECTS=s21_*.o

ifeq ($(shell uname -s), Linux)
	LFLAGS= -lm -lpthread -lcheck -lsubunit
endif

all: clean run_calc.a

test: run_calc.a
	gcc $(FLAGS) -c ../datasets/test.c
	gcc test.o $(FLAGS) $(OBJECTS) $(LFLAGS) -L. run_calc.a -o test
	rm -rf *.o

run_calc.a:
	gcc $(FLAGS) -c $(SOURCES)
	ar rcs run_calc.a $(OBJECTS)
	ranlib run_calc.a

install:
	mkdir build
	cd build && cmake ../run_calc/CMakeLists.txt && make
	cp -rf build/run_calc.app $(HOME)/Desktop/Calculator.app

uninstall: clean
	rm -rf build
	rm -rf run_calc/run_calc.app
	rm -rf run_calc/CMakeFiles
	rm -rf run_calc/Makefile
	rm -rf run_calc/calc_autogen
	rm -rf run_calc/CMakeCache.txt
	rm -rf run_calc/cmake_install.cmake
	rm -rf $(HOME)/Desktop/Calculator.app

gcov_report: clean add_coverage test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

dist:
	mkdir ../dist
	cp -r ../src ../dist
	cp ../README.md ../dist
	tar -czvf dist.tar.gz ../dist
	rm -rf ../dist

clean:
	rm -rf *.o gcov_report *.a *.gcda *.gcno test test.info -r report

add_coverage:
	$(eval FLAGS += --coverage)


