#include <stdio.h>
#include <string.h>

int main() {
    char tekst1[] = "Hello wrold!";
    printf("Tekst 1: %s\n", tekst1);

    char tekst2[100];
    printf("Podaj drugi tekst: ");
    fgets(tekst2, sizeof(tekst2), stdin);
    tekst2[strcspn(tekst2, "\n")] = '\0';

    char tekst3[100];
    strcpy(tekst3, tekst2);
    printf("Skopiowany tekst: %s\n", tekst3);

    char tekst4[200];
    strcpy(tekst4, tekst1);
    strcat(tekst4, " ");
    strcat(tekst4, tekst2);
    printf("Polaczony tekst: %s\n", tekst4);

    printf("Dlugosc tekstu 1: %s\n", strlen(tekst1));
    printf("Dlugosc tekstu 2: %s\n", strlen(tekst2));
    printf("Dlugosc polaczonego tekstu: %s\n", strlen(tekst4));

    return 0;
}