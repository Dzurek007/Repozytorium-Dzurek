#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* infile, * outfile;
    long long number;

    errno_t err;

    err = fopen_s(&infile, "dane.txt", "r");
    if (err != 0) {
        fprintf(stderr, "Nie mo¿na otworzyæ pliku dane.txt\n");
        return 1;
    }

    err = fopen_s(&outfile, "wynik.txt", "w");
    if (err != 0) {
        fprintf(stderr, "Nie mo¿na otworzyæ pliku wynik.txt\n");
        return 1;
    }

    while (fscanf_s(infile, "%lld", &number) != EOF) {
        int last_digit = number % 10;
        if (last_digit == 0 || last_digit == 3 || last_digit == 8 || last_digit == 9) {
            fprintf(outfile, "%lld\n", number);
        }
    }

    fclose(infile);
    fclose(outfile);

    printf("Odpowiednie liczby zosta³y zapisane do pliku wynik.txt\n");

    return 0;
}
