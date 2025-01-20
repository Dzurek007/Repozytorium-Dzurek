#include <stdio.h>


int nwd(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return nwd(b, a % b); 
}

int main() {
    int a, b;

    printf("Podaj dwie liczby ca³kowite:\n");
    printf("a: ");
    scanf_s("%d", &a);
    printf("b: ");
    scanf_s("%d", &b);

    
    printf("NWD(%d, %d) wynosi: %d\n", a, b, nwd(a, b));

    return 0;
}
