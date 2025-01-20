#include <stdio.h>

struct Trojkat {
    float bok1, bok2, bok3;
};

void przepisz(struct Trojkat troj1, struct Trojkat* troj2) {
    *troj2 = troj1;
}

int main() {
    struct Trojkat troj1, troj2;

    printf("Podaj d³ugoœci boków pierwszego trójk¹ta: ");
    scanf_s("%f %f %f", &troj1.bok1, &troj1.bok2, &troj1.bok3);

    przepisz(troj1, &troj2);

    printf("Boki trójk¹ta przepisane do drugiej zmiennej: %.2f, %.2f, %.2f\n",
        troj2.bok1, troj2.bok2, troj2.bok3);
    return 0;
}
