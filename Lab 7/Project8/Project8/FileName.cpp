#include <stdio.h>
#include <stdlib.h>


struct Punkt {
    int n;         
    float* wymiary; 
    struct Punkt* next; 
};


struct Punkt* stworzPunkt(int n) {
    struct Punkt* nowyPunkt = (struct Punkt*)malloc(sizeof(struct Punkt));
    if (nowyPunkt == NULL) {
        printf("B��d alokacji pami�ci dla punktu!\n");
        exit(1);
    }

    nowyPunkt->n = n;
    nowyPunkt->wymiary = (float*)malloc(n * sizeof(float));
    if (nowyPunkt->wymiary == NULL) {
        printf("B��d alokacji pami�ci dla wymiar�w punktu!\n");
        free(nowyPunkt);
        exit(1);
    }
    nowyPunkt->next = NULL;

    return nowyPunkt;
}


struct Punkt* dodajPunkt(struct Punkt* head, int n) {
    struct Punkt* nowyPunkt = stworzPunkt(n);

    printf("Podaj wsp�rz�dne punktu (%d wymiar�w):\n", n);
    for (int i = 0; i < n; i++) {
        printf("  Wymiar %d: ", i + 1);
        scanf_s("%f", &nowyPunkt->wymiary[i]);
    }

    if (head == NULL) {
        return nowyPunkt;
    }

    struct Punkt* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nowyPunkt;

    return head;
}


void wyswietlListe(struct Punkt* head) {
    if (head == NULL) {
        printf("Lista jest pusta!\n");
        return;
    }

    int index = 1;
    struct Punkt* temp = head;
    while (temp != NULL) {
        printf("Punkt %d: ", index++);
        for (int i = 0; i < temp->n; i++) {
            printf("%.2f ", temp->wymiary[i]);
        }
        printf("\n");
        temp = temp->next;
    }
}


void zwolnijListe(struct Punkt* head) {
    struct Punkt* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp->wymiary);
        free(temp);
    }
}

int main() {
    int liczbaPunktow, n;

    
    printf("Podaj liczb� punkt�w: ");
    scanf_s("%d", &liczbaPunktow);

    printf("Podaj liczb� wymiar�w przestrzeni (n): ");
    scanf_s("%d", &n);

    struct Punkt* lista = NULL;

    
    for (int i = 0; i < liczbaPunktow; i++) {
        printf("Dodawanie punktu %d:\n", i + 1);
        lista = dodajPunkt(lista, n);
    }

   
    printf("\nZawarto�� listy punkt�w:\n");
    wyswietlListe(lista);

   
    zwolnijListe(lista);

    return 0;
}
