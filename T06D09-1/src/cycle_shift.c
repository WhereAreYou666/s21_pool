#include <stdio.h>

void rotateArray(int n, int *arr, int c) {
    if (n <= 0 || n > 10) {
        printf("n/a");
        return;
    }

    c = c % n;

    if (c < 0) {
        c = n + c;
    }

    int temp;
    for (int i = 0; i < c; i++) {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n, c;
    float f;

    if (scanf("%d", &n) == 1 && n > 0 && n <= 10) {
        int arr[10];

        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("n/a");
                return 0;
            }
        }

        if (scanf("%f", &f) != 1) {
            printf("n/a");
            return 0;
        }

        if (f != (int)f) {
            printf("n/a");
            return 0;
        }

        c = (int)f;

        rotateArray(n, arr, c);

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("n/a");
    }

    return 0;
}