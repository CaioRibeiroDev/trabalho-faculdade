#include <stdlib.h>
#include <stdio.h>

int main () {
	int mat[6][6],lin,col,x, find = 0;


	for (lin=0;lin<6;lin++) {
		for (col=0;col<6;col++) {
			mat[lin][col] = rand() % 100;
			printf ("   %d   ", mat[lin][col]);
		}
		printf("\n");
	}

	printf("qual numero voce quer encontrar: ");
    scanf("%d", &x);

    for(lin=0;lin<6;lin++){
        for(col=0;col<6;col++){
            if(x == mat[lin][col]) {
                printf("Linha: %d \n Coluna: %d", lin+1, col+1);
                find = 1;
            }
        }
    }

    if(find == 0) {
        printf("Esse numero nao esta na matriz");
    }


}



