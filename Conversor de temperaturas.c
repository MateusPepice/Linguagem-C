#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float c, f, temp;
    int resp;

    do {
    printf("\nQual a temperatura deseja calcular? \n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit \n");
    scanf("%f", &temp);

    if (temp==1) {
        printf("Informe a temperatura em Celsius: \n");
        scanf("%f", &c);

        printf("A temperatura em Fahrenheit eh: %.2f graus \n", (9*(c/5))+32);
    } else if (temp == 2){
        printf("Informe a temperatura em Fahrenheit: \n");
        scanf("%f", &f);

        printf("A temperatura em Celsius eh: %.2f graus \n", 5*((f-32)/9));
    } else {
        printf("Opcao invalida!\n");
    }
    printf("\nDeseja continuar?\n");
    printf("1 - Sim \n");
    printf("2 - Nao \n");
    scanf("%i", &resp);
    } while (resp==1);
}
