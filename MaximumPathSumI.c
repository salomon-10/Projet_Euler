#include <stdio.h>

// Taille 
#define N 15
//MaximumPathSumI
int main() {
    int i,j;
    int triangle[N][N] = {
        {75},
        {95, 64},
        {17, 47, 82},
        {18, 35, 87, 10},
        {20, 04, 82, 47, 65},
        {19, 01, 23, 75, 03, 34},
        {88, 02, 77, 73, 07, 63, 67},
        {99, 65, 04, 28, 06, 16, 70, 92},
        {41, 41, 26, 56, 83, 40, 80, 70, 33},
        {41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
        {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
        {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
        {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
        {63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
        {04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23}
    };

    //  last ligne au first
    for ( i = N - 2; i >= 0; i--) {
        for ( j = 0; j <= i; j++) {
        	
            //maj  chaque �l�ment en ajoutant le maximum des deux �l�ments adjacents de la ligne suivante
			if (triangle[i + 1][j] > triangle[i + 1][j + 1]) {
			  	triangle[i][j] += triangle[i + 1][j];
				} else {
    				triangle[i][j] += triangle[i + 1][j + 1];
			}
	    }
    }

    
    printf("Le total  est: %d\n", triangle[0][0]);

    return 0;
}

