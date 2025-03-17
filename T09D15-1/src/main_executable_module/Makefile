LIBS = ../data_libs/*.c  \
	../yet_another_decision_module/decision.c  \
	../main_executable_module/main_executable_module.c \
	../data_module/data_process.c
FLAGS = -Wall -Wextra -Werror -std=c11
BUILD_STAT = ../data_libs/data_io.c  \
	../yet_another_decision_module/decision.c  \
	../main_executable_module/main_executable_module.c \
	../data_module/data_process.c

all:
	gcc -c $(FLAGS) $(LIBS)
	mkdir -p ../../build/
	gcc -o ../../build/Quest_3 *.o -lm

rebuild:
	gcc -c $(FLAGS) $(LIBS)
	gcc -o ../../build/Quest_3 *.o -lm

clean:
	rm -f *.o *.so
	clear

build_with_static:
	gcc -c $(FLAGS) $(LIBS)
	ar r data_stat.a data_stat.o
	rm -f data_stat.o
	gcc -o ../../build/Quest_5 *.o data_stat.a -lm
	clear
	rm -f *.o *.a

build_with_dynamic:
	gcc -c $(FLAGS) $(LIBS)
	gcc -c -fPIC ../data_module/data_process.c -lm
	gcc -shared -o libdata_process.so *.o
	rm -f *.o
	gcc -o ../../build/Quest_6 ../main_executable_module/main_executable_module.c -L. -ldata_process -Wl,-rpath,. -lm
	mkdir -p ../../build/
	mv libdata_process.so ../../build/
	clear
