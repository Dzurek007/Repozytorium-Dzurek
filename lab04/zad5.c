#include <stdio.h>

void wypiszCyfre(int cyfra) {
    switch (cyfra) {
    case 0: printf("zero "); break;
    case 1: printf("jeden "); break;
    case 2: printf("dwa "); break;
    case 3: printf("trzy "); break;
    case 4: printf("cztery "); break;
    case 5: printf("piêæ "); break;
    case 6: printf("szeœæ "); break;
    case 7: printf("siedem "); break;
    case 8: printf("osiem "); break;
    case 9: printf("dziewiêæ "); break;
    }
}

int main() {
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("Podales zla liczbe.\n");
        return 1;
    }

    printf("Liczba w zapisie slowami: ");
    if (liczba == 0) {
        printf("zero\n");
        return 0;
    }

    while (liczba > 0) {
        int cyfra = liczba % 10;
        wypiszCyfre(cyfra);
        liczba /= 10;
    }

    printf("\n");
    return 0;
}