#include <stdio.h>

void powtarzajZnak(char* znak, int* ilosc) {
    for (int i = 0; i < *ilosc; i++) {
        printf("%c", *znak);
    }
    (*ilosc)--;
    printf("\nPozosta³a liczba powtórzeñ: %d\n", *ilosc);
}

int main() {
    char znak;
    int ilosc;

    printf("Podaj znak i iloœæ powtórzeñ: ");
    scanf_s(" %c", &znak, 1);
    scanf_s("%d", &ilosc);

    powtarzajZnak(&znak, &ilosc);

    return 0;
}
