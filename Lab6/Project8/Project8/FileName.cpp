#include <stdio.h>

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);

    zamien(&a, &b);
    printf("Po zamianie: a = %d, b = %d\n", a, b);

    return 0;
}
