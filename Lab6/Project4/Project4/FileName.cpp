#include <stdio.h>

void doKwadratu(int* liczba) {
    *liczba *= *liczba;
}

int main() {
    int liczba;

    printf("Podaj liczb�: ");
    scanf_s("%d", &liczba);

    doKwadratu(&liczba);
    printf("Kwadrat liczby: %d\n", liczba);

    return 0;
}
