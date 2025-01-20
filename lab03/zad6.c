#include <stdio.h>

int main() {

	int tab[20];

	for (int i = 0; i < 10; i++) {
		tab[i] = i;
		printf("%d ", tab[i]);
	}

	for (int i = 0; i < 10; i++) {
		tab[i + 10] = tab[i];
		printf("%d ", tab[i + 10]);
	}

	return 0;
}