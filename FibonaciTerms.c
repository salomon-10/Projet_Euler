#include <stdio.h>
#include <stdlib.h>

int t, a, b;
int somme = 2;

int main() {
    a = 1;
    b = 2;
    t = 0;

    while (t < 4000000) {
        t = a + b;
        if (t % 2 == 0) {
            somme += t;
        }
        a = b;
        b = t;
    }

    printf("La somme est : %d\n", somme);
    return 0;
}

