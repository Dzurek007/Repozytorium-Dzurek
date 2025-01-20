#include <stdio.h>
#include <stdlib.h>

// Definicja struktury Punkt10
struct Punkt10 {
    float wymiary[10]; // Tablica do przechowywania 10 wsp�rz�dnych
};

// Funkcja do przepisania zawarto�ci tablicy tab1 do tab2
void przepiszTablice(struct Punkt10* tab1, struct Punkt10* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < 10; j++) {
            tab2[i].wymiary[j] = tab1[i].wymiary[j];
        }
    }
}

int main() {
    int n;

    // Wczytanie liczby punkt�w
    printf("Podaj liczb� punkt�w: ");
    scanf_s("%d", &n);

    // Dynamiczna alokacja tablic Punkt10
    struct Punkt10* tab1 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));
    struct Punkt10* tab2 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));

    if (tab1 == NULL || tab2 == NULL) {
        printf("B��d alokacji pami�ci!\n");
        return 1;
    }

    // Wczytanie wsp�rz�dnych punkt�w
    printf("Podaj wsp�rz�dne punkt�w (10 wsp�rz�dnych dla ka�dego punktu):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("  Wymiar %d: ", j + 1);
            scanf_s("%f", &tab1[i].wymiary[j]);
        }
    }

    // Przepisanie tablicy tab1 do tab2
    przepiszTablice(tab1, tab2, n);

    // Wy�wietlenie zawarto�ci tablicy tab2
    printf("\nZawarto�� tablicy tab2 (skopiowana):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", tab2[i].wymiary[j]);
        }
        printf("\n");
    }

    // Zwolnienie pami�ci
    free(tab1);
    free(tab2);

    return 0;
}
