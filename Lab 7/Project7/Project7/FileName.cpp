#include <stdio.h>
#include <stdlib.h>


struct PunktN {
    int n;         
    float* wymiary; 
};

void przepiszTablice(struct PunktN* tab1, struct PunktN* tab2, int liczbaPunktow) {
    for (int i = 0; i < liczbaPunktow; i++) {
        tab2[i].n = tab1[i].n; 
        tab2[i].wymiary = (float*)malloc(tab1[i].n * sizeof(float)); 
        if (tab2[i].wymiary == NULL) {
            printf("B³¹d alokacji pamiêci dla tab2[%d]!\n", i);
            exit(1);
        }
        for (int j = 0; j < tab1[i].n; j++) {
            tab2[i].wymiary[j] = tab1[i].wymiary[j];
        }
    }
}

int main() {
    int liczbaPunktow, n;

   
    printf("Podaj liczbê punktów: ");
    scanf_s("%d", &liczbaPunktow);

    printf("Podaj liczbê wymiarów przestrzeni (n): ");
    scanf_s("%d", &n);

   
    struct PunktN* tab1 = (struct PunktN*)malloc(liczbaPunktow * sizeof(struct PunktN));
    struct PunktN* tab2 = (struct PunktN*)malloc(liczbaPunktow * sizeof(struct PunktN));

    if (tab1 == NULL || tab2 == NULL) {
        printf("B³¹d alokacji pamiêci dla tablic!\n");
        return 1;
    }


    printf("Podaj wspó³rzêdne punktów:\n");
    for (int i = 0; i < liczbaPunktow; i++) {
        tab1[i].n = n;
        tab1[i].wymiary = (float*)malloc(n * sizeof(float)); 
        if (tab1[i].wymiary == NULL) {
            printf("B³¹d alokacji pamiêci dla tab1[%d]!\n", i);
            return 1;
        }
        printf("Punkt %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("  Wymiar %d: ", j + 1);
            scanf_s("%f", &tab1[i].wymiary[j]);
        }
    }

    
    przepiszTablice(tab1, tab2, liczbaPunktow);


    printf("\nZawartoœæ tablicy tab2 (skopiowana):\n");
    for (int i = 0; i < liczbaPunktow; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < tab2[i].n; j++) {
            printf("%.2f ", tab2[i].wymiary[j]);
        }
        printf("\n");
    }

  
    for (int i = 0; i < liczbaPunktow; i++) {
        free(tab1[i].wymiary);
        free(tab2[i].wymiary);
    }
    free(tab1);
    free(tab2);

    return 0;
}
