#include <stdio.h>
#include <stdlib.h>

/*
    1 6 7
    2 5 8
    3 4 9
*/

void sort_vertical(int **matrix, int n, int m, int **result_matrix);

/*
    1 2 3
    6 5 4
    7 8 9
*/

void sort_horizontal(int **matrix, int n, int m, int **result_matrix);
int **input(int *n, int *m);
void output(int **matrix, int n, int m);
int **alloc_matrix(int n, int m);
void free_matrix(int **matrix, int lines);
int ex();
unsigned char r_integer(int *a);

int main() {
    int **matrix = NULL, **result = NULL;
    int m = 0, n = 0;

    matrix = input(&n, &m);
    if (matrix == NULL) {
        for (int i = 0; i < m; i++) free(matrix[i]);
        free(matrix);
        return ex();
    }
    result = alloc_matrix(n, m);
    putchar('\n');

    sort_vertical(matrix, n, m, result);
    output(result, n, m);
    putchar('\n');
    putchar('\n');

    sort_horizontal(matrix, n, m, result);
    output(result, n, m);

    free_matrix(matrix, m);
    free_matrix(result, m);
    return 0;
}

void bubble_sort(int *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                int c = array[j];
                array[j] = array[j + 1];
                array[j + 1] = c;
            }
        }
    }
}

int **alloc_matrix(int n, int m) {
    int **matrix;
    matrix = malloc(sizeof(int *) * m);
    if (matrix == NULL) return NULL;
    for (int i = 0; i < m; i++) {
        matrix[i] = malloc(sizeof(int) * n);
        if (matrix[i] == NULL) {
            for (int j = i; j > 0; j--) free(matrix[j]);
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

void free_matrix(int **matrix, int lines) {
    for (int i = 0; i < lines; i++) free(matrix[i]);
    free(matrix);
}

int **input(int *n, int *m) {
    int **matrix;
    if (r_integer(m)) return NULL;
    if (r_integer(n)) return NULL;
    if ((*m <= 0) || (*n <= 0)) return NULL;

    matrix = alloc_matrix(*n, *m);
    if (matrix == NULL) return NULL;

    for (int i = 0; i < (*m); i++)
        for (int j = 0; j < (*n); j++)
            if (r_integer(matrix[i] + j)) {
                for (int k = 0; k < (*m); k++) free(matrix[j]);
                free(matrix);
                return NULL;
            }
    return matrix;
}

void output(int **matrix, int n, int m) {
    for (int i = 0; i < m; i++) {
        printf("%d", matrix[i][0]);
        for (int j = 1; j < n; j++) printf(" %d", matrix[i][j]);
        if (i + 1 < m) putchar('\n');
    }
}
int is_in_bounds(int a, int x, int b) { return (a <= x) && (x <= b); }

unsigned char myisdigit(char a) {
    if ((a >= '0') && (a <= '9')) return 1;
    return 0;
}

unsigned char r_integer(int *a) {
    int result = 0;
    char reading = getchar();
    int multiplier = 1;
    if (reading == '-') multiplier = -1, reading = '0';
    while ((reading == ' ') || (reading == '\n')) reading = getchar();
    if (!myisdigit(reading)) {
        return 1;
    }
    result += reading - '0';
    do {
        reading = getchar();
        if ((reading == ' ') || (reading == '\n')) break;
        if (!myisdigit(reading)) return 1;
        if ((result * 10 + (reading - '0')) < result) return 1;
        result *= 10;
        result += reading - '0';
    } while (1);
    *a = result * multiplier;
    return 0;
}

void sort_horizontal(int **matrix, int n, int m, int **result_matrix) {
    int *array = malloc(m * n * sizeof(int));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) array[i * n + j] = matrix[i][j];
    bubble_sort(array, m * n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if ((i % 2) == 0)
                result_matrix[i][j] = array[i * n + j];
            else
                result_matrix[i][n - j - 1] = array[i * n + j];
        }
    free(array);
}

void sort_vertical(int **matrix, int n, int m, int **result_matrix) {
    int *array = malloc(m * n * sizeof(int));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) array[i * n + j] = matrix[i][j];
    bubble_sort(array, m * n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if ((j % 2) == 0)
                result_matrix[i][j] = array[j * m + i];
            else
                result_matrix[m - i - 1][j] = array[j * m + i];
        }
    free(array);
}

int ex() {
    printf("n/a");
    return 0;
}