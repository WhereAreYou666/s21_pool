CC = gcc -Wall -Wextra -Werror -fsanitize=address

all: strlen_tests strcmp_tests strcpy_tests strcat_tests strchr_tests strstr_tests strtok_tests

strlen_tests: s21_string_test.c s21_string.c
	$(CC) -DLEN s21_string_test.c s21_string.c -o ../build/Quest_1

strcmp_tests: s21_string_test.c s21_string.c
	$(CC) -DCMP s21_string_test.c s21_string.c -o ../build/Quest_2
	
strcpy_tests: s21_string_test.c s21_string.c
	$(CC) -DCPY s21_string_test.c s21_string.c -o ../build/Quest_3
	
strcat_tests: s21_string_test.c s21_string.c
	$(CC) -DCAT s21_string_test.c s21_string.c -o ../build/Quest_4
	
strchr_tests: s21_string_test.c s21_string.c
	$(CC) -DCHR s21_string_test.c s21_string.c -o ../build/Quest_5
	
strstr_tests: s21_string_test.c s21_string.c
	$(CC) -DSTR s21_string_test.c s21_string.c -o ../build/Quest_6
	
strtok_tests: s21_string_test.c s21_string.c
	$(CC) -DTOK s21_string_test.c s21_string.c -o ../build/Quest_7

clean:
	rm -f *.o *.out ../build/Quest*

rebuild: clean all
