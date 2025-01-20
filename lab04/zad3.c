#include <stdio.h>

int main() {
    char tekst[1234];
    int samogloski = 0, spolgloski = 0;

    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    for (int i = 0; tekst[i] != '\0'; i++) {
        char znak = tekst[i];

        if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u' || znak == 'y' ||
            znak == 'A' || znak == 'E' || znak == 'I' || znak == 'O' || znak == 'U' || znak == 'Y') {
            samogloski++;
        }
        else if ((znak >= 'b' && znak <= 'z') || (znak >= 'B' && znak <= 'Z')) {
            if (znak != 'a' && znak != 'e' && znak != 'i' && znak != 'o' && znak != 'u' && znak != 'y' &&
                znak != 'A' && znak != 'E' && znak != 'I' && znak != 'O' && znak != 'U' && znak != 'Y') {
                spolgloski++;
            }
        }
    }

    printf("Liczba samoglosek: %d\n", samogloski);
    printf("Liczba spolglosek: %d\n", spolgloski);

    return 0;
}