#include <stdio.h>
#include <time.h>

int main() {
    int n, suma = 0, liczba;
    srand(time(NULL));
    printf("Podaj n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        liczba = rand() % 56 - 10;
        printf("%d\n", liczba);
        if (liczba % 2 == 0) {
            suma = suma + liczba;
        }
    }

    printf("Suma: %d\n", suma);

    return 0;
}