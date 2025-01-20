#include <stdio.h>

int main()
{
    int a;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("Liczba jest parzysta");
    }
    else {
        printf("Liczba jest nieparzysta");
    }
}