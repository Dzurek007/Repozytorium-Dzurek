#include <stdio.h>

int main()
{
    float a, b, c, d, srednia;

    printf("Wprowadz 4 liczby: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    srednia = (a + b + c + d) / 4;

    printf("Srednia to: %f", srednia);

    return 0;
}