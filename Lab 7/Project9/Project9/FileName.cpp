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
        printf("B³¹d alokacji pamiêci dla punktu!\n");
        exit(1);
    }

    nowyPunkt->n = n;
    nowyPunkt->wymiary = (float*)malloc(n * sizeof(float));
    if (nowyPunkt->wymiary == NULL) {
        printf("B³¹d alokacji pamiêci dla wymiarów punktu!\n");
        free(nowyPunkt);
        exit(1);
    }
    nowyPunkt->next = NULL;

    return nowyPunkt;
}

struct Punkt* dodajPunkt(struct Punkt* head, int n) {
    struct Punkt* nowyPunkt = stworzPunkt(n);

    printf("Podaj wspó³rzêdne punktu (%d wymiarów):\n", n);
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

struct Punkt* usunPunkt(struct Punkt* head, int indeks) {
    if (head == NULL) {
        printf("Lista jest pusta! Nie mo¿na usun¹æ elementu.\n");
        return head;
    }

    struct Punkt* temp = head;
    struct Punkt* prev = NULL;

    if (indeks == 1) {
        head = head->next;
        free(temp->wymiary);
        free(temp);
        printf("Punkt %d zosta³ usuniêty.\n", indeks);
        return head;
    }

    for (int i = 1; i < indeks; i++) {
        if (temp == NULL) {
            printf("Nie znaleziono punktu o indeksie %d.\n", indeks);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Nie znaleziono punktu o indeksie %d.\n", indeks);
        return head;
    }

    prev->next = temp->next;
    free(temp->wymiary);
    free(temp);
    printf("Punkt %d zosta³ usuniêty.\n", indeks);

    return head;
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
    struct Punkt* lista = NULL;
    int wybor, liczbaPunktow, indeks, n;


    do {
        printf("\nMenu:\n");
        printf("1. Dodaj punkt\n");
        printf("2. Wyœwietl listê punktów\n");
        printf("3. Usuñ punkt\n");
        printf("4. Zakoñcz\n");
        printf("Wybierz opcjê: ");
        scanf_s("%d", &wybor);

        switch (wybor) {
        case 1:
            printf("Podaj liczbê wymiarów punktu: ");
            scanf_s("%d", &n);
            lista = dodajPunkt(lista, n);
            break;

        case 2:
            printf("\nZawartoœæ listy punktów:\n");
            wyswietlListe(lista);
            break;

        case 3:
            printf("Podaj indeks punktu do usuniêcia: ");
            scanf_s("%d", &indeks);
            lista = usunPunkt(lista, indeks);
            break;

        case 4:
            printf("Zamykanie programu...\n");
            break;

        default:
            printf("Nieprawid³owa opcja. Spróbuj ponownie.\n");
        }
    } while (wybor != 4);

    
    zwolnijListe(lista);

    return 0;
}
