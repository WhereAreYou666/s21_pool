#include <stdio.h>

#define N 15
#define M 13

void transform(int* buf, int** matr, int n, int m);
void make_picture(int** picture, int n, int m);
void reset_picture(int** picture, int n, int m);
void output(int** matrix, int width, int height);

int main() {
    int pic_data[N][M];
    int* pic[N];
    transform((int*)pic_data, pic, N, M);
    make_picture(pic, N, M);
    output(pic, N, M);
    return 0;
}

void output(int** matrix, int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", matrix[i][j]);
            if (j != w - 1) printf(" ");
        }
        if (i != h - 1) printf("\n");
    }
}

void make_picture(int** picture, int n, int m) {
    int w[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int h[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int tree_tr[] = {7, 7, 7, 7};
    int tree_le[] = {3, 3, 3, 3};
    int sun[3][3] = {{6, 6, 6}, {0, 6, 6}, {6, 0, 6}};

    reset_picture(picture, n, m);

    int length_w = sizeof(w) / sizeof(w[0]);
    int length_h = sizeof(h) / sizeof(h[0]);
    int length_trunk = sizeof(tree_tr) / sizeof(tree_tr[0]);
    int length_le = sizeof(tree_le) / sizeof(tree_le[0]);
    int length_sun = sizeof(sun[0]) / sizeof(sun[0][0]);

    for (int i = 0; i < length_trunk; i++) {
        picture[10][2 + i] = tree_tr[i];
        picture[6 + i][3] = tree_tr[i];
        picture[6 + i][4] = tree_tr[i];
    }
    for (int i = 0; i < length_le; i++) {
        picture[3][2 + i] = tree_le[i];
        picture[4][2 + i] = tree_le[i];
        picture[2 + i][3] = tree_le[i];
        picture[2 + i][4] = tree_le[i];
    }
    for (int j = 0; j < length_sun; j++) {
        picture[1][7 + j] = sun[1][j];
        picture[4][7 + j] = sun[1][j];
        picture[1][9 + j] = sun[0][j];
    }
    for (int j = 0; j < length_sun; j++) {
        picture[4 - j][9] = sun[1][j];
        picture[4 - j][10] = sun[1][j];
        picture[4 - j][11] = sun[0][j];
    }
    for (int i = 0; i < length_w; i++) {
        picture[0][i] = w[i];
        picture[n - 1][i] = w[i];
        picture[n / 2][i] = w[i];
    }
    for (int i = 0; i < length_h; i++) {
        picture[i][0] = h[i];
        picture[i][m - 1] = h[i];
        picture[i][m / 2] = h[i];
    }
}

void reset_picture(int** picture, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            picture[i][j] = 0;
        }
    }
}

void transform(int* buf, int** matr, int n, int m) {
    for (int i = 0; i < n; i++) {
        matr[i] = buf + i * m;
    }
}