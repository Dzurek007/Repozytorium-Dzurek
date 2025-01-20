#include <stdio.h>

int main() {
    int tab[10];
    int i;

    for (i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;
        if (i % 2 == !0)
            printf("%d ", tab[i]);
    }



    return 0;
}