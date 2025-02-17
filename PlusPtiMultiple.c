#include <stdio.h>


int ppcm(int min, int max) {
    int p = max; 
    
    while (1) { // Boucle infinie jusqu'a true 
	int i;	
        for ( i = min; i <= max; i++) {
         if (p % i != 0) { 
                break;
        }
        }
        if (i > max) { 
            return p;
        }
        p++; // Sinon teste le nombre suivant
    }
}
int main() {
    int min = 1, max = 20;
    printf(" %d\n", ppcm(min, max));
    return 0;
}

