#include <stdio.h>


int silnia(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * silnia(n - 1); 
}

int main() {
    int liczba;

  
    printf("Podaj liczbê ca³kowit¹: ");
    scanf_s("%d", &liczba);


    if (liczba < 0) {
        printf("Silnia nie jest zdefiniowana dla liczb ujemnych.\n");
    }
    else {
       
        printf("Silnia liczby %d wynosi %d\n", liczba, silnia(liczba));
    }

    return 0;
}
