#include <stdio.h>
#include <time.h>

int main() {

    int a, b, tab[10];

    printf("Podaj pierwsza wartosc: ");
    scanf("%d", &a);
    printf("Podaj druga wartosc: ");
    scanf("%d", &b);

    tab[0] = a;
    tab[1] = b;

    for (int i = 2; i < 10; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
        printf("%d ", tab[i]);
    }

    return 0;
}