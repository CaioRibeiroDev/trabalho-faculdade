#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10],i,col, aleatorio, soma, maiorNumero, posicaoMaiorNumero;

    for (i=0;i<10;i++) {
        aleatorio = rand() % 100;
        if(aleatorio % 2 == 1){
            arr[i] = aleatorio;
        }else {
            i--;
        }
    }

    for (i=0;i<10;i++) {
        if (arr[i] > maiorNumero) {
            maiorNumero = arr[i];
            posicaoMaiorNumero = i+1;
        }
        printf (" %d ", arr[i]);
        soma = soma + arr[i];
    }

    printf("\n\nTotal da Soma: %d", soma);
    printf("\nMaior numero: %d", maiorNumero);
    printf("\nPosição do maior numero: %d \n\n", posicaoMaiorNumero);


}

