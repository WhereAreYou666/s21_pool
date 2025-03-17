#include "door_struct.h"

void output(struct door *doors) {
    for (int i = 0; i < DOORS_COUNT; i++) printf("%d, %d\n", doors[i].id, doors[i].status);
}

void sort_doors(struct door *doors) {
    for (int i = DOORS_COUNT - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (doors[j].id > doors[j + 1].id) {
                struct door temp = doors[j];
                doors[j] = doors[j + 1];
                doors[j + 1] = temp;
            }
        }
    }
}

void close_all_doors(struct door *doors) {
    for (int i = 0; i < DOORS_COUNT; i++) doors[i].status = 0;
}