#ifndef DOOR_STRUCT_H_
#define DOOR_STRUCT_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOORS_COUNT 15
#define MAX_ID_SEED 10000

struct door {
    int id;
    int status;
};

void output(struct door *doors);
void sort_doors(struct door *doors);
void close_all_doors(struct door *doors);

#endif