#include <stdio.h>


int ciag(int n) {
    if (n == 1) {
        return -1; 
    }
    return -ciag(n - 1) * (n - 2); 
}

int main() {
    int n;

    
    printf("Podaj numer wyrazu ci¹gu (n > 0): ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Numer wyrazu ci¹gu musi byæ wiêkszy od zera.\n");
    }
    else {
        
        printf("n-ty wyraz ci¹gu dla n = %d wynosi: %d\n", n, ciag(n));
    }

    return 0;
}
