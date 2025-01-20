#include <stdio.h>

struct Trojkat {
    float bok1, bok2, bok3;
};

float obwod(struct Trojkat t) {
    return t.bok1 + t.bok2 + t.bok3;
}

int main() {
    struct Trojkat t;

    printf("Podaj d³ugoœci boków trójk¹ta: ");
    scanf_s("%f %f %f", &t.bok1, &t.bok2, &t.bok3);

    printf("Obwód trójk¹ta: %.2f\n", obwod(t));
    return 0;
}
