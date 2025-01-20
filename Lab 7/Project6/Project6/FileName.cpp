#include <stdio.h>
#include <stdlib.h>

// Definicja struktury Punkt10
struct Punkt10 {
    float wymiary[10]; // Tablica do przechowywania 10 wspó³rzêdnych
};

// Funkcja do przepisania zawartoœci tablicy tab1 do tab2
void przepiszTablice(struct Punkt10* tab1, struct Punkt10* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < 10; j++) {
            tab2[i].wymiary[j] = tab1[i].wymiary[j];
        }
    }
}

int main() {
    int n;

    // Wczytanie liczby punktów
    printf("Podaj liczbê punktów: ");
    scanf_s("%d", &n);

    // Dynamiczna alokacja tablic Punkt10
    struct Punkt10* tab1 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));
    struct Punkt10* tab2 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));

    if (tab1 == NULL || tab2 == NULL) {
        printf("B³¹d alokacji pamiêci!\n");
        return 1;
    }

    // Wczytanie wspó³rzêdnych punktów
    printf("Podaj wspó³rzêdne punktów (10 wspó³rzêdnych dla ka¿dego punktu):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("  Wymiar %d: ", j + 1);
            scanf_s("%f", &tab1[i].wymiary[j]);
        }
    }

    // Przepisanie tablicy tab1 do tab2
    przepiszTablice(tab1, tab2, n);

    // Wyœwietlenie zawartoœci tablicy tab2
    printf("\nZawartoœæ tablicy tab2 (skopiowana):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", tab2[i].wymiary[j]);
        }
        printf("\n");
    }

    // Zwolnienie pamiêci
    free(tab1);
    free(tab2);

    return 0;
}
