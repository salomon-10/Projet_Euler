#include <stdio.h>
#include <stdlib.h>

void Triplet(){
	int a,b,c,produit;
	for(a=1;a<1000;a++){
		for(b=a;b<1000-a;b++){
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
