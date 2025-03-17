CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11

BUILD=../build/

door_struct=$(BUILD)Quest_1
list_test=$(BUILD)Quest_2
stack_test=$(BUILD)Quest_3

SRC_1=dmanager_module.o door_functions.o
SRC_2=list.c list_test.c
SRC_3=stack.c stack_test.c

OBJ_1=$(SRC_1)
OBJ_2=$(SRC_2:.c=.o)
OBJ_3=$(SRC_3:.c=.o)

all: clean door_struct list_test stack_test

clean:
	rm -f *.o $(BUILD)Quest_1 $(BUILD)Quest_2 $(BUILD)Quest_3

door_struct: $(OBJ_1)
	$(CC) $(OBJ_1) -o $(door_struct)

dmanager_module.o: dmanager_module.c
	$(CC) $(CFLAGS) -c dmanager_module.c -o dmanager_module.o

door_functions.o: door_functions.c
	$(CC) $(CFLAGS) -c door_functions.c -o door_functions.o

list_test: $(OBJ_2)
	$(CC) $(OBJ_2) -o $(list_test)

list.o: list.c
	$(CC) $(CFLAGS) -c list.c -o list.o

list_test.o: list_test.c
	$(CC) $(CFLAGS) -c list_test.c -o list_test.o

stack_test: $(OBJ_3)
	$(CC) $(OBJ_3) -o $(stack_test)

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c -o stack.o

stack_test.o: stack_test.c stack.h
	$(CC) $(CFLAGS) -c stack_test.c -o stack_test.o
