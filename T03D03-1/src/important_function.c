#include <math.h>
#include <stdio.h>

float expon(float x, float y) { return x * powf(10.0f, y); }

int main() {
    float x;
    if (scanf("%f", &x) == 1) {
        float result = expon(7.0f, -3.0f) * powf(x, 4.0f) +
                       ((22.8f * cbrtf(x) - expon(1.0f, 3.0f)) * x + 3) / (x * x / 2.0f) -
                       x * powf((10.0f + x), (2.0f / x)) - 1.01f;
        if (isnan(result)) {
            printf("n/a");
            return 0;
        }
        printf("%.1f", result);
    } else {
        printf("n/a");
    }
    return 0;
}