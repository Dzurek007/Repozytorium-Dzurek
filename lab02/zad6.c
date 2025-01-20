#include <stdio.h>
#include <time.h>

int main() {

    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }
    for (int i = 100; i >= 0; i--) {
        printf("%d\n", i);
    }
    for (int i = 0; i < 100; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    for (int i = 20; i >= 0; i--) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}