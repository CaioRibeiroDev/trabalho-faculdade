#include<stdlib.h>
#include<stdio.h>

void main() {

     int i;
     float arr[10], arrMultiplicado[10], valorDigitado, menorNumero = 999, soma;

    for(i=1; i <= 10; i++) {
        printf("Digite um numero Real: \n");
        scanf("%f", &valorDigitado);

        arr[i] = valorDigitado;

    }

    for(i=1; i <= 10; i++) {
        if (arr[i] < menorNumero) menorNumero = arr[i];
    }

    printf("\n\n");

    for(i=1; i <= 10; i++) {
        arrMultiplicado[i] =  arr[i] * menorNumero;
        printf("Numero multiplicado %.2f \n", arrMultiplicado[i]);
        soma = soma + arrMultiplicado[i];

    }

    printf("\nMenor Numero digitado %.2f", menorNumero);
    printf("\n\nSOMA: %.2f", soma);


}
