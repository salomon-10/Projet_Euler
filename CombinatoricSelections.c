#include <stdio.h>
#include <stdlib.h>

// Fonction optimisée pour calculer C(n, r) sans overflow
long long combine(int n, int r) {
    if (r > n - r) r = n - r; // Exploite la symétrie C(n, r) = C(n, n-r)
int i;
    long long p = 1;
    for ( i = 0; i < r; i++) {
        p = p * (n - i) / (i + 1); 
        if (p > 1000000) return p; // Arrêt anticipé si supérieur à 1M
    }
    return p;
}

int main() {
    int n, r;
    int nb = 0;

    //  valeurs distinctes supérieures à 1 million
    for (n = 1; n <= 100; n++) {
        for (r = 0; r <= n; r++) {
            if (combine(n, r) > 1000000) {
                nb++;
            }
        }
    }

    printf("Nombre de valeurs distinctes > a 1 million : %d\n", nb);

    // Exemple d'affichage d'une combinaison spécifique
//    n = 5, r = 2;
//    printf("C(%d, %d) = %lld\n", n, r, combine(n, r));

    return 0;
}

