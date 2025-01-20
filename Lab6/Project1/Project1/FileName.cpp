#include <stdio.h>

int main() {
    int a, b, c;
    int* ptr_a = &a, * ptr_b = &b, * ptr_c = &c;


    printf("Podaj wartoœæ zmiennej a: ");
    scanf_s("%d", ptr_a); 

    
    printf("Adres zmiennej a: %p, Wartoœæ zmiennej a: %d\n", (void*)ptr_a, *ptr_a);

    
    printf("Podaj dwie liczby b i c do obliczeñ ró¿nicy i œredniej:\n");
    scanf_s("%d %d", ptr_b, ptr_c);

    int roznica = *ptr_b - *ptr_c;
    float srednia = (*ptr_b + *ptr_c) / 2.0f; 


    printf("Ró¿nica: %d\n", roznica);
    printf("Œrednia: %.2f\n", srednia);

    return 0; 
}
