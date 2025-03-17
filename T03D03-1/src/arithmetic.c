#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }

    printf("%d %d %d ", a + b, a - b, a * b);

    if (b != 0) {
        printf("%d", a / b);
    } else {
        printf("n/a");
    }

    return 0;
}