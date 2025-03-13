#include <stdio.h>
#include <string.h>

#define LIMITE 28123

int tb[LIMITE + 1] = {0}; // Tab pour marquer les som de deux abondant

//  calcule la som des diviseur propres 
int SomDiv(int n) {  
    int somme = 1, i; 
    for (i = 2; i * i <= n; i++) { // Optimisation avec sqrt(n)
        if (n % i == 0) {
            somme += i;
            if (i != n / i) somme += n / i;
        }
    }
    return somme;
}

int main() {
    int abondants[LIMITE]; // Tabl pour stocker les nbres abondant
    int P = 0;  // Compteur des nombres abondants
    int i, j, somme; 

    // Trv tous  les nbres abondant = LIMITE
    for (i = 1; i <= LIMITE; i++) {
        if (SomDiv(i) > i) {  
            abondants[P++] = i;
        }
    }

    // Trv tous les nombres  ecrit comme somme de 2 nbres abondant
    for (i = 0; i < P; i++) {
        for (j = i; j < P; j++) {
            somme = abondants[i] + abondants[j];
            if (somme <= LIMITE) {
                tb[somme] = 1;
            } else {  
                break; 
            }
        }
    }

    int T = 0; 

    // Additionner tous nbres n'est pas dans tb[]
    for (i = 1; i <= LIMITE; i++) {
        if (tb[i] == 0) {
            T += i;
        }
    }

    printf("la somme des nombres qui ne peuvent pas etre ecrit comme  somme 2 abondant est  : %d\n", T);
    return 0;
}

