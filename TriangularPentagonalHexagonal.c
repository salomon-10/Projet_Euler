#include <stdio.h>
#include <stdlib.h>

int Pentagonal(int n) {
    int b;
    for (b = 166; (b * (3 * b - 1)) / 2 <= n; b++) {
        if ((b * (3 * b - 1)) / 2 == n) {
            return b; 
    }}
    return -1; 
}

void forme() { 
    int Ta, Pb, Hc, a, b, c;    

    for (c = 144; c < 40000; c++) { // nbr hexagonaux
        Hc = c * (2 * c - 1);
        
        for (b = 166; b < 40000; b++) { // Vérifier si Hc est pentagonal
            Pb = b * (3 * b - 1) / 2;
            
            if (Pb == Hc) { // Hc est ausi pentagonal
                for (a = 286; a < 60000; a++) { // Vérifier si Hc est triangulair
                    Ta = a * (a + 1) / 2;
                    
                    if (Ta == Hc) { // Hc est aussi triangulaire
                        printf("T(%d) = P(%d) = H(%d) = %d\n", a, b, c, Hc);
                        return; 
                    }}}
        }
    }
}

int main() {
    forme();
    return 0;
}

