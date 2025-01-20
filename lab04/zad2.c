#include <stdio.h>

int main() {
    printf("Kody ASCII od 'a' do 'z':\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("'%c' = %d\n", c, (int)c);
    }

    printf("\nKody ASCII od 'A' do 'Z':\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("'%c' = %d\n", c, (int)c);
    }

    printf("\nKody ASCII od '0' do '9':\n");
    for (char c = '0'; c <= '9'; c++) {
        printf("'%c' = %d\n", c, (int)c);
    }

    return 0;
}