#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Dane {
    int liczba;
    char napis[50];
};


void inicjalizujTabliceStatyczna(struct Dane tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i].liczba = i + 1;
        sprintf_s(tab[i].napis, sizeof(tab[i].napis), "Statyczny %d", i + 1);
    }
}


void inicjalizujTabliceDynamiczna(struct Dane* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i].liczba = (i + 1) * 2;
        sprintf_s(tab[i].napis, sizeof(tab[i].napis), "Dynamiczny %d", i + 1);
    }
}


void inicjalizujTabliceWskaznikow(struct Dane* tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i] = (struct Dane*)malloc(sizeof(struct Dane));
        if (tab[i] == NULL) {
            printf("B³¹d alokacji pamiêci dla tablicy wskaŸników!\n");
            exit(1);
        }
        tab[i]->liczba = (i + 1) * 3;
        sprintf_s(tab[i]->napis, sizeof(tab[i]->napis), "Wskaznik %d", i + 1);
    }
}


int sumaTablicyStatycznej(struct Dane tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i].liczba;
    }
    return suma;
}


int sumaTablicyDynamicznej(struct Dane* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i].liczba;
    }
    return suma;
}

int sumaTablicyWskaznikow(struct Dane* tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i]->liczba;
    }
    return suma;
}


void zwolnijTabliceWskaznikow(struct Dane* tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        free(tab[i]);
    }
}

int main() {
    const int ROZMIAR = 10;


    struct Dane tabStatyczna[ROZMIAR];
    inicjalizujTabliceStatyczna(tabStatyczna, ROZMIAR);


    struct Dane* tabDynamiczna = (struct Dane*)malloc(ROZMIAR * sizeof(struct Dane));
    if (tabDynamiczna == NULL) {
        printf("B³¹d alokacji pamiêci dla tablicy dynamicznej!\n");
        return 1;
    }
    inicjalizujTabliceDynamiczna(tabDynamiczna, ROZMIAR);

  
    struct Dane* tabWskaznikow[ROZMIAR];
    inicjalizujTabliceWskaznikow(tabWskaznikow, ROZMIAR);


    printf("Suma dla statycznej tablicy: %d\n", sumaTablicyStatycznej(tabStatyczna, ROZMIAR));
    printf("Suma dla dynamicznej tablicy: %d\n", sumaTablicyDynamicznej(tabDynamiczna, ROZMIAR));
    printf("Suma dla tablicy wskaŸników: %d\n", sumaTablicyWskaznikow(tabWskaznikow, ROZMIAR));

   
    free(tabDynamiczna);
    zwolnijTabliceWskaznikow(tabWskaznikow, ROZMIAR);

    return 0;
}
