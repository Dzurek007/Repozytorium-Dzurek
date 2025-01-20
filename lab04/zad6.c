#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
    char napis[1000];
    char wynik[1000];
    int i, j;
    int prawda;

    printf("Podaj ciag znakow: ");
    fgets(napis, sizeof(napis), stdin);
    napis[strcspn(napis, "\n")] = '\0';

    int dlugosc = strlen(napis);

    for (i = 0; i < dlugosc; i++) {
        prawda = 0;

        for (j = 0; j < strlen(s1); j++) {
            if (napis[i] == s1[j]) {
                wynik[i] = s2[j];
                prawda = 1;
                break;
            }
        }

        if (prawda == 0) {
            wynik[i] = napis[i];
        }
    }

    wynik[dlugosc] = '\0';

    printf("Zakodowany ciag: %s\n", wynik);

    return 0;
}
