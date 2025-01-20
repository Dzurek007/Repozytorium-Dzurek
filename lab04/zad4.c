#include <stdio.h>

int main() {
    char tekst[1234];
    int i, j;

    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    for (i = 0; tekst[i] != '\0'; i++) {}

    printf("Odwrocone: ");
    for (j = i - 2; j >= 0; j--) {
        if (tekst[j] >= 'a' && tekst[j] <= 'z') {
            printf("%c", tekst[j] - 'a' + 'A');
        }
        else {
            printf("%c", tekst[j]);
        }
    }
    printf("\n");

    return 0;
}