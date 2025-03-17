#include <stdio.h>
#define NMAX 10

void input(int *a);
void output(int *a);
void bubbleSort(int *a);

int main() {
    int arr[NMAX];
    input(arr);
    bubbleSort(arr);
    output(arr);

    return 0;
}

void input(int *a) {
    char c;
    for (int i = 0; i < NMAX; i++)
        if (scanf("%d%c", &a[i], &c) != 2 || (c != '\n' && c != ' ')) {
            printf("n/a");
            break;
        }
}

void output(int *a) {
    for (int i = 0; i < NMAX; i++) {
        printf("%d ", a[i]);
    }
}

void bubbleSort(int *a) {
    for (int i = 0; i < NMAX - 1; i++) {
        for (int j = 0; j < NMAX - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}