#include <stdio.h>


void na_binarny(int n) {
    if (n > 1) {
        na_binarny(n / 2); 
    }
    printf("%d", n % 2); 
}

int main() {
    int liczba;


    printf("Podaj liczb� ca�kowit� (n >= 0): ");
    scanf_s("%d", &liczba);

    if (liczba < 0) {
        printf("Liczba musi by� wi�ksza lub r�wna 0.\n");
    }
    else {
        printf("Reprezentacja binarna liczby %d to: ", liczba);
        na_binarny(liczba); 
        printf("\n");
    }

    return 0;
}
