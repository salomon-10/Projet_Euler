#include <stdio.h>
#include <stdlib.h>

//CountingSundays
int bixestile(int annee){
	return(annee%4==0 && annee%100!=0)|| (annee%400==0);
}
int main() {
	int mois[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int jour=2;// 1er jan 1901 etait un mardi (dimanche=0 ---> samedi=6)
	int sundays=0;
	int i,j;// i=année;j=mois
	
		for(i=1901;i<=2000;i++){
			// gerer fevrier ~~~///(^v^)\\\~~~ 
			if(bixestile(i)){
				mois[1]=29;
			}else{
				mois[1]=28;
			}
			for(j=0;j<12;j++){ // janvier=0 ---> decembre=11
				if(jour==0){ // si jour pointe sur 0(dimanche)
				sundays++;
				}
				jour=(jour+mois[j])%7;
			}
		}
	printf("le nbres de dimanche qui tombent sur le 1er du mois entre cet Intervalle est %d \n",sundays);
	return 0;
}
