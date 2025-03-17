#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void input(double ***matrix, int *n, int *m);
void output_roots(double *roots, int n);
int sle(double **matrix, int n, double *roots);

int main() {
    double **matrix = NULL;
    int n = 0, m = 0;
    double *roots = NULL;

    input(&matrix, &n, &m);

    if (n != m - 1) {
        printf("n/a\n");
        return 1;
    }

    roots = (double *)malloc(n * sizeof(double));
    if (roots == NULL) {
        printf("n/a\n");
        return 1;
    }

    if (sle(matrix, n, roots) == 0) {
        output_roots(roots, n);
    } else {
        printf("n/a\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(roots);

    return 0;
}

void input(double ***matrix, int *n, int *m) {
    scanf("%d %d", n, m);

    *matrix = (double **)malloc(*n * sizeof(double *));
    for (int i = 0; i < *n; i++) {
        (*matrix)[i] = (double *)malloc(*m * sizeof(double));
        for (int j = 0; j < *m; j++) {
            scanf("%lf", &((*matrix)[i][j]));
        }
    }
}

void output_roots(double *roots, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.6f", roots[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
}

int sle(double **matrix, int n, double *roots) {
    for (int i = 0; i < n; i++) {
        double maxEl = fabs(matrix[i][i]);
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(matrix[k][i]) > maxEl) {
                maxEl = fabs(matrix[k][i]);
                maxRow = k;
            }
        }

        for (int k = i; k < n + 1; k++) {
            double tmp = matrix[maxRow][k];
            matrix[maxRow][k] = matrix[i][k];
            matrix[i][k] = tmp;
        }

        for (int k = i + 1; k < n; k++) {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j < n + 1; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        roots[i] = matrix[i][n];
        for (int j = i + 1; j < n; j++) {
            roots[i] -= matrix[i][j] * roots[j];
        }
        if (fabs(matrix[i][i]) < 1e-9) {
            return -1;
        }
        roots[i] /= matrix[i][i];
    }

    return 0;
}
