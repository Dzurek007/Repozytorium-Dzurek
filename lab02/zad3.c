#include <stdio.h>

int main() {
    int n, suma = 0, liczba;

    printf("Podaj n: ");
    scanf("%d", &n);

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &liczba);
        if (liczba % 2 == 0) {
            suma = suma + liczba;
        }
    }

    printf("Suma: %d\n", suma);

    return 0;
}