#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Punkt {
    double x, y, z;
};


double odleglosc(struct Punkt p1, struct Punkt p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}


double najmniejszaOdleglosc(struct Punkt* tab, int n) {
    double minOdleglosc = odleglosc(tab[0], tab[1]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double odl = odleglosc(tab[i], tab[j]);
            if (odl < minOdleglosc) {
                minOdleglosc = odl;
            }
        }
    }
    return minOdleglosc;
}

int main() {
    int n;


    printf("Podaj liczbê punktów: ");
    scanf_s("%d", &n);


    struct Punkt* tab = (struct Punkt*)malloc(n * sizeof(struct Punkt));
    if (tab == NULL) {
        printf("B³¹d alokacji pamiêci!\n");
        return 1;
    }

 
    printf("Podaj wspó³rzêdne punktów (x, y, z):\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%lf %lf %lf", &tab[i].x, &tab[i].y, &tab[i].z);
    }

  
    double minOdleglosc = najmniejszaOdleglosc(tab, n);
    printf("Najmniejsza odleg³oœæ miêdzy punktami: %.2f\n", minOdleglosc);

   
    free(tab);

    return 0;
}
