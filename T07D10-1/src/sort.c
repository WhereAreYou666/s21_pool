#include <stdio.h>
#include <stdlib.h>

int input(int **a, int *n);
void sort(int *a, int n);
void output(int *a, int n);

int main() {
    int *arr;
    int n;

    if (input(&arr, &n) == 1) {
        sort(arr, n);
        output(arr, n);
        free(arr);
    }

    return 0;
}

int input(int **a, int *n) {
    char c;

    if (scanf("%d%c", n, &c) != 2 || (c != '\n' && c != ' ')) {
        printf("n/a");
        return 0;
    }

    *a = (int *)malloc((*n) * sizeof(int));
    if (*a == NULL) {
        printf("n/a");
        return 0;
    }

    for (int i = 0; i < *n; i++)
        if (scanf("%d%c", &(*a)[i], &c) != 2 || (c != '\n' && c != ' ')) {
            free(*a);
            printf("n/a");
            return 0;
        }

    return 1;
}

void sort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
}