#include<stdlib.h>
#include<stdio.h>

void main() {

    int i;
    int arr[10], primeiroValor, aleatorio, soma;

    printf("Digite um numero: \n");
    scanf ("%d", &primeiroValor);

    for(i=1; i <= 9; i++) {
        aleatorio = rand() % 100;


        if(aleatorio%primeiroValor == 0) {
            arr[i] = aleatorio;
        }else {
            i--;
        }
    }

    for(i=1; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }


}
