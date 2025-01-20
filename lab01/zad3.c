#include <stdio.h>

int main()
{
    float a, b;
    printf("Wprowadz a: ");
    scanf("%f", &a);
    printf("Wprowadz b: ");
    scanf("%f", &b);

    if (a > b) {
        printf("%f > %f", a, b);
    }
    if (a == b) {
        printf("%f = %f", a, b);
    }
    else {
        printf("%f > %f", b, a);
    }
    return 0;
}