#include <stdio.h>

unsigned long long binomial(int n, int k) {
    unsigned long long x = 1; 
    int i;
    if (k > n - k) {
        k = n - k;
    }

    for ( i = 0; i < k; i++) {
        x = x * (n - i) / (i + 1);
    }

    return x;
}

int main() {
    int a = 20;
    int p = 2 * a;
    unsigned long long l = 0, nbroutes = 0;
    nbroutes = binomial(p, a); 

    printf("Nombre de routes pour un treillis %dx%d : %llu\n", a, a, nbroutes);
    
    return 0;
}

