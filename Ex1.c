#include<stdlib.h>
#include<stdio.h>

void main() {

    int i, valores[15], valorDigitado;

    for(i=1; i <= 15; i++) {
        printf("Digite um numero multiplo de 3 e 5: \n");
        scanf("%d", &valorDigitado);

        if(valorDigitado % 3 == 0 && valorDigitado % 5 == 0){
            system("color a");
            valores[i] = valorDigitado;
            system("cls");
        }else {
            system("color c");
            printf("\n=========================================");
            printf("\n\nDIGITE UM NUMERO MULTIPLO DE 3 E 5!!!\n");
            printf("\n=========================================\n\n");
            i--;
        }
    }

    printf("\n\n");

    for(i=1; i <= 15; i++) {
        printf("%d: Valor que foi digitado: %d \n", i, valores[i]);
    }

}
