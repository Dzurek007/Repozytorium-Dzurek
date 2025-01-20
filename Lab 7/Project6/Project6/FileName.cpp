#include <stdio.h>
#include <stdlib.h>


struct Punkt10 {
    float wymiary[10]; 
};


void przepiszTablice(struct Punkt10* tab1, struct Punkt10* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < 10; j++) {
            tab2[i].wymiary[j] = tab1[i].wymiary[j];
        }
    }
}

int main() {
    int n;

    
    printf("Podaj liczbę punktów: ");
    scanf_s("%d", &n);

    
    struct Punkt10* tab1 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));
    struct Punkt10* tab2 = (struct Punkt10*)malloc(n * sizeof(struct Punkt10));

    if (tab1 == NULL || tab2 == NULL) {
        printf("Błąd alokacji pamięci!\n");
        return 1;
    }

    
    printf("Podaj współrzędne punktów (10 współrzędnych dla każdego punktu):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("  Wymiar %d: ", j + 1);
            scanf_s("%f", &tab1[i].wymiary[j]);
        }
    }

    // Przepisanie tablicy tab1 do tab2
    przepiszTablice(tab1, tab2, n);

    // Wyświetlenie zawartości tablicy tab2
    printf("\nZawartość tablicy tab2 (skopiowana):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", tab2[i].wymiary[j]);
        }
        printf("\n");
    }

    // Zwolnienie pamięci
    free(tab1);
    free(tab2);

    return 0;
}
