#include <stdio.h>
#include <stdlib.h>

	int Somcarr(int min,int max){
	int Som=0,i,squar ; 
	
	for(i=min;i<=max;i++){
		squar=i*i;
		Som+=squar;
	}
		return Som;
}
	int Carrsom(int min,int max){
		int Som=0,i,squar ;
		for(i=min;i<=max;i++){
			Som+=i;
		}
		squar=Som*Som;
		return squar;
	}
	
	

int main() {
	int min=1;
	int max=100;
	int Somme_Carre =Somcarr (min,max) ;
    printf("La somme des carres de %d a %d est : %d\n", min, max, Somme_Carre);
    int Carre_Som = Carrsom(min,max);
        printf("Le carre de la somme  de %d a %d est : %d\n", min, max, Carre_Som);
        //difference
    int Diff= Carre_Som-Somme_Carre;
        printf("la difference entre le carre de la somme et la somme des carres de %d a %d est %d",min,max,Diff);

	return 0;
}
