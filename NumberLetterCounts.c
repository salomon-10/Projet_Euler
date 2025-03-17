#include <stdio.h>
//NumberLetterCounts
int main() {
    int somme = 0,i;
    int chiffre[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4}; // one... nine
    int dizaine[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; // ten... nineteen
    int multiple_dix[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6}; // twenty...ninety

    for ( i = 1; i <= 1000; i++) {
        int n = i;
        
        if (n == 1000) { 
            somme += 11; // "one thousand"
            continue;
        }

        if (n >= 100) {
            somme += chiffre[n / 100] + 7; // "X hundred"
            if (n % 100 != 0) somme += 3; // "and"
            n %= 100;
        }
        if (n >= 20) {
            somme += multiple_dix[n / 10];
            n %= 10;
        } else if (n >= 10) {
            somme += dizaine[n - 10];
            n = 0;
        }
        somme += chiffre[n];
    }

    printf("Nombre total de lettres : %d\n", somme);
    return 0;
}

