#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[10];
    int min, max;

    printf("Podaj minimaln� i maksymaln� warto�� zakresu: ");
    scanf_s("%d %d", &min, &max);

    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % (max - min + 1) + min;
        printf("Adres tab[%d]: %p, Warto��: %d\n", i, (void*)&tab[i], tab[i]);
    }

    return 0;
}