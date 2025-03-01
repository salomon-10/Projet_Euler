#include <stdio.h>
//LargestPalindromeProduct

int Palindrome(int n) {
    int X = n;  // a X on affecte  la valeur de n 
    int inv = 0,p;
    
    // Inversion du nombre
    while (n > 0) {
         p = n % 10;
        inv = inv * 10 + p;
        n /= 10;
    }

    return (X == inv);  // si X(la valeur de n )= inv ( inverse de la valeur de n ) alors n est un palindrome
}

int main() {
    int MaxPal = 0;
    int a, produit=0, b,i,j;

    for ( i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {  //  évite les répétitions en commençant par j = i
             produit = i * j;

            // si le nombre est palindromiq  ,  on verifie si il est le plus grand
            if (Palindrome(produit) && produit > MaxPal) {
                MaxPal = produit;
                a= i;
                b= j;
            }
        }
    }

    printf("Le plus grand palindrome a 6 chiffres est : %d = %d * %d\n", MaxPal, a, b);
    
    return 0;
}

