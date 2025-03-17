#include <stdio.h>

int max(int a, int b);

int main() {
    float a1 = 0, b1 = 0;
    scanf("%f %f", &a1, &b1);
    int a = (int)a1;
    int b = (int)b1;

    if (a1 - a != 0 || b - b1 != 0)
        printf("n/a");
    else
        printf("%d", max(a, b));

    return 0;
}

int max(int a, int b) { return (a > b ? a : b); }