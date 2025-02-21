#include <stdio.h>
#include <string.h>


void LargestProd(char *nombre) {
    int maxProduit = 0,i,j;
    int produit,taille=13;
	int l=strlen(nombre);
	
    for ( i = 0; i <= (l-taille) ; i++) {// parcours du char c-a-d le nombre
        produit = 1;
       
        for ( j = 0; j < taille; j++) { // parcours les 13 chiffres
            produit *= (nombre[i + j] );//Calcul du produit des 13 chiffres adjacents
        }

        if (produit > maxProduit) {//si produit est sup a maxProduit précédent alors produi est affecté a maxmprod et devient le nouveau
            maxProduit = produit;
        }
    }

    printf("Le plus grand produit des 13 chiffres adjacents : %d.\n", maxProduit);
}

int main() {
	 char nombre[1000]; 
    printf("Saisir le nombre :\n");
    scanf("%s", nombre);  
    LargestProd(nombre);  
return 0;
}

