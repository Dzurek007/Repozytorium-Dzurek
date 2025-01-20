#include <stdio.h>

int* mniejsza(int* a, int* b) {
    return (*a < *b) ? a : b;
}

int main() {
    int a, b;

    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);

    int* mniejszaLiczba = mniejsza(&a, &b);
    printf("Mniejsza liczba: %d (adres: %p)\n", *mniejszaLiczba, (void*)mniejszaLiczba);

    return 0;
}
