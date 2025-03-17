#include "list.h"

int main() {
    struct door doors[DOORS_COUNT];
    initialize_doors(doors);
    for (int i = 0; i < DOORS_COUNT; i++) printf("DOOR %d, %d\n", doors[i].id, doors[i].status);

    printf("------------------\n");

    struct node *nodes = init(doors);
    if (nodes != NULL) {
        struct node *firstNode = nodes;
        for (int i = 1; i < DOORS_COUNT; i++) {
            nodes = add_door(nodes, &doors[i]);
        }
        output(firstNode, NULL);
        printf("------------------\n");

        int finddoor = 2;
        struct node *findnode = find_door(finddoor, firstNode);
        printf("[%p] FIND NODE[id=%d]: %d, %d => %p\n", findnode, finddoor, findnode->doors.id,
               findnode->doors.status, findnode->tail);

        printf("------------------\n");
        struct node *tmp = remove_door(findnode, firstNode);
        output(firstNode, tmp);

        destroy(firstNode);
    }
    return 0;
}
