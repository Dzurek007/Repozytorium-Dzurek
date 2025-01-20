#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbê elementów tablicy: ");
    scanf_s("%d", &n);

    int tab[n];
    int suma = 0;

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &tab[i]);
        suma += tab[i];
    }

    float srednia = suma / (float)n;
    printf("Œrednia: %.2f\n", srednia);

    printf("Elementy wiêksze od œredniej:\n");
    for (int i = 0; i < n; i++) {
        if (tab[i] > srednia) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}
