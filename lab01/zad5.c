#include <stdio.h>

int main()
{
    float a, b, wynik;
    char znak;

    printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj b: ");
    scanf("%f", &b);
    printf("Podaj znak dzialania jakie chcesz wykonac (+,-,/,*): ");
    scanf(" %c", &znak);
    switch (znak) {
    case '+': wynik = a + b;
        printf("%f", wynik);
        break;
    case '-': wynik = a - b;
        printf("%f", wynik);
        break;
    case '/': wynik = a / b;
        printf("%f", wynik);
        break;
    case '*': wynik = a * b;
        printf("%f", wynik);
        break;
    }


    return 0;
}