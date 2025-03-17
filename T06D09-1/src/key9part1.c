/*------------------------------------
        Здравствуй, человек!
        Чтобы получить ключ
        поработай с комментариями.
-------------------------------------*/

#include <stdio.h>
#define NMAX 10

int input(int *buffer, int *length);
void output(int *buffer, int length);
int sum_numbers(int *buffer, int length);
int find_numbers(int *buffer, int length, int number, int *numbers);

/*------------------------------------
        Функция получает массив данных
        через stdin.
        Выдает в stdout особую сумму
        и сформированный массив
        специальных элементов
        (выбранных с помощью найденной суммы):
        это и будет частью ключа
-------------------------------------*/

int main() {
    int arr[NMAX + 5], num;
    if (input(arr, &num) == 1) {
        int out_arr[NMAX + 5];
        int summa = sum_numbers(arr, num);
        int length_out_arr = find_numbers(arr, num, summa, out_arr);
        printf("%d\n", summa);
        if (length_out_arr != 0) output(out_arr, length_out_arr);
    }
    return 0;
}

/*------------------------------------
        Функция должна находить
        сумму четных элементов
        с 0-й позиции.
-------------------------------------*/

int sum_numbers(int *buffer, int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        if (buffer[i] != 0) {
            if (buffer[i] % 2 == 0) sum = sum + buffer[i];
        }
    }

    return sum;
}

/*------------------------------------
        Функция должна находить
        все элементы, на которые нацело
        делится переданное число и
        записывает их в выходной массив.
-------------------------------------*/

int find_numbers(int *buffer, int length, int number, int *numbers) {
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (number == 0) break;
        if (buffer[i] != 0) {
            if (number % buffer[i] == 0) {
                numbers[j] = buffer[i];
                j = j + 1;
            }
        }
    }
    return j;
}

int input(int *buffer, int *length) {
    char c;
    if (scanf("%d", length) != 1 || *length > NMAX || *length <= 0) {
        printf("n/a");
        return 0;
    } else {
        for (int i = 0; i < *length; i++)
            if (scanf("%d%c", &buffer[i], &c) != 2 || (c != '\n' && c != ' ')) {
                printf("n/a");
                return 0;
                break;
            }
    }
    return 1;
}

void output(int *a, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d", a[i]);
        if (i < length - 1) printf(" ");
    }
}
