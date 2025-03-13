#include <stdio.h>
#include <string.h>


#define LIMITE 1000

//PowerDigitSum
void PowerDigitSum() {
   
    int tb[LIMITE] = {0};
    int P = 1; // Nbre de chiffre actuel
    tb[0] = 1; 
    int i, j;
     
    for (i = 0; i < 1000; i++) {
        int r = 0;// r= reste
        
        for (j = 0; j < P; j++) {
            int prod = tb[j] * 2 + r;
            tb[j] = prod % 10; 
            r = prod / 10; // Retenue
        }
        //getion de retenue
        while (r > 0) {
            tb[P] = r % 10;
            r /= 10;
            P++;  
        }
    }
 
    int somme = 0;
    for (i = 0; i < P; i++) {
        somme += tb[i];
    }

    // Affichage
    printf("2^1000 = ");
    for (i = P - 1; i >= 0; i--) {
        printf("%d", tb[i]);
    }
    printf("\n");
    printf("Somme des chiffres de 2^1000 = %d\n", somme);
}

int main() {
    PowerDigitSum();
    return 0;
}

