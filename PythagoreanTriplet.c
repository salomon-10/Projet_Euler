#include <stdio.h>
#include <stdlib.h>

void Triplet(){
	int a,b,c,produit;
	//parcour tous de 1 a 999
	for(a=1;a<1000;a++){
		for(b=a;b<1000-a;b++){//puisque a<b<c  telq la som=1000 bpart de la valeur actuels de a  allant vers 1000-a(valeur actuels de a)
			c=1000-a-b;
			if(a*a+b*b==c*c){
				printf("a=%d ; b=%d ; c=%d\n",a,b,c);
				produit=a*b*c;
				printf("le produit des triplets des : %d \n",produit);
				return;
			}
		}
	}
}
int main() {
	Triplet();
	return 0;
}
