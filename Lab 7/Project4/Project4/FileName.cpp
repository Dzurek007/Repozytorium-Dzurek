#include <stdio.h>
#include <stdlib.h>


struct Punkt {
    float x, y, z;
};

void przepiszTablice(struct Punkt* tab1, struct Punkt* tab2, int n) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

int main() {
    int n;

 
    printf("Podaj liczbê punktów: ");
    scanf_s("%d", &n);

    struct Punkt* tab1 = (struct Punkt*)malloc(n * sizeof(struct Punkt));
    struct Punkt* tab2 = (struct Punkt*)malloc(n * sizeof(struct Punkt));

    if (tab1 == NULL || tab2 == NULL) {
        printf("B³¹d alokacji pamiêci!\n");
        return 1;
    }

    printf("Podaj wspó³rzêdne punktów (x, y, z):\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%f %f %f", &tab1[i].x, &tab1[i].y, &tab1[i].z);
    }


    przepiszTablice(tab1, tab2, n);

   
    printf("Tablica 2 (skopiowana):\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d: %.2f, %.2f, %.2f\n", i + 1, tab2[i].x, tab2[i].y, tab2[i].z);
    }

 
    free(tab1);
    free(tab2);

    return 0;
}
