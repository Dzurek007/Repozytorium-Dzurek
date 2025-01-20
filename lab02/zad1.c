#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, n = 0;
    float a, suma, srednia, max = 0;

    while (i == 1) {
        printf("Wprowadz liczbe: ");
        scanf("%f", &a);

        if (a >= 0) {
            suma = suma + a;
            n++;
            srednia = srednia + a;
            if (a > max) {
                max = a;
            }
        }
        else {
            i = 0;
        }
    }
    srednia = srednia / n;

    printf("Suma: %f \nSrednia: %f \nMax: %f \n", suma, srednia, max);

    return 0;
}