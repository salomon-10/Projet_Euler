#include <stdio.h>
#include <stdlib.h>

void Prime_Factor(int n) {
	int i;
    printf("Les facteurs premiers de %d sont :\n", n);

    // Traiter le facteur 2
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    //  facteurs impairs
    for ( i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // n est  nbre premier > 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int a;
    do {
        printf("Saisissez un nombre entier :\n");
        scanf("%d", &a);
    } while (a <= 0);

    Prime_Factor(a);

    return 0;
}

