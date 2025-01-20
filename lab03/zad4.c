#include <stdio.h>
#include <time.h>

int main() {
    int n, min = 0;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    srand(time(NULL));

    int tab[n];

    for (int i = 0; i < n; i++) {
        tab[i] = -23 + rand() % 74 - 0;

        if (tab[i] < min) {
            min = tab[i];
        }
    }
    printf("%d", min);
}