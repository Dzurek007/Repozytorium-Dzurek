#include <stdio.h>

int* potega(int* podstawa, int* wykladnik) {
    static int wynik = 1;
    for (int i = 0; i < *wykladnik; i++) {
        wynik *= *podstawa;
    }
    return &wynik;
}

int main() {
    int podstawa, wykladnik;

    printf("Podaj podstawê i wyk³adnik: ");
    scanf_s("%d %d", &podstawa, &wykladnik);

    int* wynik = potega(&podstawa, &wykladnik);
    printf("Wynik: %d\n", *wynik);

    return 0;
}
