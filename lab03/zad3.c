
#include <stdio.h>

int main() {

    int n, a;

    printf("Podaj wartosc a: ");
    scanf("%d", &a);
    printf("Podaj wielkosc tablicy: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a;
        a = a - 5;
    }

    printf("Tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}