#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846

double varzyera_Anyezi(double x) { return 1.0 / (1.0 + x * x); }

double lemniscate_Bernulli(double x) { return sqrt(sqrt(1.0 + 4.0 * x * x) - x * x - 1.0); }

double quad_giperbol(double x) { return 1.0 / (x * x); }

void print_value(FILE* file, double value) {
    if (isnan(value) || isinf(value)) {
        fprintf(file, " - ");
    } else {
        fprintf(file, "%.7lf", value);
    }
}

int main(void) {
    FILE* file = fopen("data/door_data.txt", "w");
    if (file == NULL) {
        printf("Error occurred while opening file\n");
        return 1;
    }

    for (double x = -PI; x <= PI; x += (2 * PI) / 41.0) {
        fprintf(file, "%.7lf | ", x);
        print_value(file, varzyera_Anyezi(x));
        fprintf(file, " | ");
        print_value(file, lemniscate_Bernulli(x));
        fprintf(file, " | ");
        print_value(file, quad_giperbol(x));
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}