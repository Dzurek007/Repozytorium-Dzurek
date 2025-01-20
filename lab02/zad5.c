#include <stdio.h>
#include <time.h>

int main() {
    int n, i = 1;
    float p, srednia;

    printf("Podaj liczbe studentow: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("Podaj liczbe punktow studenta nr.%d: ", i);
        scanf("%f", &p);
        srednia = srednia + p;
        i++;
    }
    srednia = srednia / n;
    printf("Srednia to: %f", srednia);
    return 0;
}