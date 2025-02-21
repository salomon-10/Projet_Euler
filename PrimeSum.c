#include <stdio.h>
#include <stdlib.h>

long long SomPrime(long long max) {
    long long x, som = 0, i;
    x = 2;
    
    while (x < max) {
        for (i = 2; i <= x; i++) {
            if (x % i == 0) {
                break;
            }
        }
        if (i == x) { // Si x n'est divisible par aucun nombre avant lui, il est premier
         	//	printf("%d ",x);
            som += x;
        }
        x++;
    }
    
    printf("\nSomme = %lld\n", som);
    return som;
}

int main() {
    long long max = 2000000;
    printf("La somme des nombres premiers est : ");
    SomPrime(max);
    return 0;
}

