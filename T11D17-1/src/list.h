#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOORS_COUNT 5
#define MAX_ID_SEED 10000

struct door {
    int id;
    int status;
};

struct node {
    struct door doors;
    struct node *tail;
};

void initialize_doors(struct door *doors);
void output(struct node *nodes, struct node *elem);
struct node *init(const struct door *door);
struct node *add_door(struct node *elem, const struct door *door);
void destroy(struct node *root);
struct node *find_door(int door_id, struct node *root);
struct node *remove_door(struct node *elem, struct node *root);

#endif