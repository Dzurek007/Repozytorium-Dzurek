#include <stdio.h>

int main() {
    int i, j;

    printf("Podaj liczbê wierszy i kolumn macierzy: ");
    scanf("%d %d", &i, &j);

    int macierz1[i][j], macierz2[i][j], wynik[i][j];

    printf("Podaj elementy pierwszej macierzy (%dx%d):\n", i, j);
    for (int w = 0; w < i; w++) {
        for (int k = 0; k < j; k++) {
            scanf("%d", &macierz1[w][k]);
        }
    }

    printf("Podaj elementy drugiej macierzy (%dx%d):\n", i, j);
    for (int w = 0; w < i; w++) {
        for (int k = 0; k < j; k++) {
            scanf("%d", &macierz2[w][k]);
        }
    }


    for (int w = 0; w < i; w++) {
        for (int k = 0; k < j; k++) {
            wynik[w][k] = macierz1[w][k] + macierz2[w][k];
        }
    }

    printf("Suma macierzy:\n");
    for (int w = 0; w < i; w++) {
        for (int k = 0; k < j; k++) {
            printf("%d ", wynik[w][k]);
        }
        printf("\n");
    }

    return 0;
}