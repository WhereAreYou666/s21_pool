#include <stdio.h>
void error();
int input_0();
int input_1();

int main(int n, char* mode[1]) {
    if (n == 2) {
        if (*mode[1] == '0') {
            if (input_0()) error();
        } else if (*mode[1] == '1') {
            if (input_1()) error();
        } else {
            error();
        }
    } else {
        error();
    }
}
void error() { printf("n/a\n"); }
int input_0() {
    int error = 0;
    char ch = ' ', c;
    do {
        if (scanf("%c%c", &c, &ch) == 2 && (ch == ' ' || ch == '\n')) {
            printf("%X ", c);
        } else {
            error = 1;
            ch = '\n';
        }
    } while (ch != '\n');
    return error;
}
int input_1() {
    int error = 0;
    unsigned int c;
    char ch;
    while (ch != '\n') {
        if (scanf("%x%c", &c, &ch) == 2 && c < 128) {
            printf("%c ", c);
        } else {
            error = 1;
            ch = '\n';
        }
    }
    return error;
}
