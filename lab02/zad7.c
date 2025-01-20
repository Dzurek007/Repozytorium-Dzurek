#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 10; i > 0; i--) {
        for (j = 0; j < i; j++)
            printf("X");
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        for (j = 0; j < i; j++)
            printf("X");
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        for (j = 0; j < 10 - i; j++)
            printf(" ");
        for (k = 0; k < i; k++)
            printf("X");
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        for (j = 0; j < 10 - i; j++)
            printf(" ");
        for (k = 0; k < 2 * i - 1; k++)
            printf("X");
        printf("\n");
    }