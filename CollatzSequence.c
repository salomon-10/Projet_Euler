#include <stdio.h>
#include <stdlib.h>

// CollatzSequence

int Sequence(long long int n) {
    int p = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        p++;
    }
    return p;
}

int main() {
    long long int i, max_l = 0, max_n = 0;
    int l;
    int a = 1000000;
    
    for (i = 1; i < a; i++) {
        l = Sequence(i);
        if (l > max_l) {
            max_l = l;
            max_n = i;  
        }
    }
    
    printf("Le nombre inferieur à %d qui produit la sequence de Collatz la plus longue est : %lld\n", a, max_n);
    printf("La longueur maximale de la sequence est : %d\n", max_l);
    
    return 0;
}

