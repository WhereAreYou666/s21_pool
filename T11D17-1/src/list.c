#include "list.h"

struct node *remove_door(struct node *elem, struct node *root) {
    struct node *ptr = root;
    struct node *prev = NULL;

    while (ptr != NULL && ptr != elem) {
        prev = ptr;
        ptr = ptr->tail;
    }

    if (ptr == elem) {
        if (prev != NULL) {
            prev->tail = ptr->tail;
        } else {
            root = ptr->tail;
        }
        printf("REMOVING THE DOOR: %p\n\n", elem);
        free(ptr);
    }

    return root;
}

struct node *find_door(int door_id, struct node *root) {
    while (root) {
        if (root->doors.id == door_id) return root;
        root = root->tail;
    }
    return NULL;
}

struct node *init(const struct door *doors) {
    struct node *root = (struct node *)malloc(sizeof(struct node));
    if (root == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    root->doors = *doors;
    root->tail = NULL;
    return root;
}

struct node *add_door(struct node *elem, const struct door *doors) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    new_node->doors = *doors;
    new_node->tail = NULL;
    elem->tail = new_node;
    return new_node;
}

void destroy(struct node *root) {
    struct node *current = root;
    struct node *next;

    while (current != NULL) {
        next = current->tail;
        free(current);
        current = next;
    }
}

void initialize_doors(struct door *doors) {
    srand(time(0));

    int seed = rand() % MAX_ID_SEED;
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = rand() % 2;
    }
}

void output(struct node *nodes, struct node *elem) {
    int i = 0;
    while (nodes != NULL) {
        if (nodes != elem || elem == NULL) {
            printf("[%p] NODE[%d]: %d, %d => %p\n", nodes, i, nodes->doors.id, nodes->doors.status,
                   nodes->tail);
        }
        nodes = nodes->tail;
        i++;
    }
}
