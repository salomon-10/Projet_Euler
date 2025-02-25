#include <stdio.h>
#include <stdlib.h>

long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);  
    
   
}
 int somme(long long n) {
    int som = 0;
    
    while (n > 0) {
        som += n % 10;  // Prend le dernier chiffre
        n /= 10;          // Supprime le dernier chiffre
    }
    
    return som;}

int main() {
    int a = 100;
    long long int l;
    int som = 0;
    l = fact(a);
    
    printf("Factoriel de %d est %lld \n", a, l);
    som=somme(l);
    printf("la somme des chiffre du Factoriel de %d est %lld \n", a,som );
    return 0;
}

