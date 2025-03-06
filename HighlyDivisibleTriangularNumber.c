#include <stdio.h>
#include <stdlib.h>
int Triangle(long long x){
	int n=0;
	long long i;
	for(i=1;i<=x;i++){
		if(x%i==0){
			n++; // trouve un diviseur
		}
	}
	return n;
}

int main() {
	long long nombre;
	nombre=0;
	int i=1,nbDiv;
	printf(" entrer le nombre de diviseur  que doit avoir le nombre triangulair (X)\n");
	scanf("%d",&nbDiv);
	while(1){
		nombre+=i;// produit le nombre triangulaire
		if(Triangle(nombre)>nbDiv){
			printf("Le premier nombre triangulaire avec plus de %d diviseurs est : %lld\n",nbDiv,nombre);
            break;
        }
        i++;
    }
	return 0;
}
