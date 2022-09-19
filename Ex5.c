#include <stdlib.h>
#include <stdio.h>

int main () {
	int mat[4][4], lin,col;


	for (lin=0;lin<4;lin++) {
		for (col=0;col<4;col++) {
			mat[lin][col] = rand() % 100;
			printf ("   %d   ", mat[lin][col]);
		}
		printf("\n");
	}

	printf("\n\n\n");

	for (lin=0;lin<2;lin++) {
		for (col=0;col<4;col++) {
            int temp = mat[3-lin][col];
            mat[3-lin][col] = mat[lin][col];
            mat[lin][col] = temp;

		}
	}

	for (lin=0;lin<4;lin++) {
		for (col=0;col<4;col++) {
			printf ("   %d   ", mat[lin][col]);
		}
		printf("\n");
	}
}



