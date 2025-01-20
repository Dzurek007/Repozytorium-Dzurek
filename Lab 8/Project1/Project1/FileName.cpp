#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

void sort(double* a, double* b) {
    if (*a > *b) {
        double temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    FILE* infile, * outfile;
    double r1, r2, area1, area2;
    errno_t err;

    err = fopen_s(&infile, "promienie.txt", "r");
    if (err != 0) {
        fprintf(stderr, "Nie mo¿na otworzyæ pliku promienie.txt\n");
        return 1;
    }

    err = fscanf_s(infile, "%lf %lf", &r1, &r2);
    fclose(infile);

    area1 = PI * r1 * r1;
    area2 = PI * r2 * r2;

    sort(&area1, &area2);

    err = fopen_s(&outfile, "wynik.txt", "w");
    if (err != 0) {
        fprintf(stderr, "Nie mo¿na otworzyæ pliku wynik.txt\n");
        return 1;
    }

    fprintf(outfile, "%lf\n%lf\n", area1, area2);
    fclose(outfile);

    printf("Pola kó³ zosta³y zapisane do pliku wynik.txt\n");

    return 0;
}
