#include <stdio.h>
#include <math.h>

int main()
{
    int dodatnie, ujemne;
    float a, suma;

    for (int i = 1; i < 11; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%f", &a);

        if (a >= 0) {
            dodatnie++;
        }
        else {
            ujemne++;
        }

        suma = suma + a;
    }
    printf("Dodatnie: %d\nUjemne: %d\nSuma: %f", dodatnie, ujemne, a);
    return 0;
}