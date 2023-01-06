#include <stdio.h>
#include <stdlib.h>
#include "Aritmetica.h"
#include "Ponderada.h"

int main() {
    float nota1,nota2,nota3;
    char op;

    printf("Informe as 3 notas: ");
    scanf("%f%f%f", &nota1,&nota2,&nota3);

    printf("Informe de que forma deseja calcular as notas: \n");
    printf("A - Aritmetica\n");
    printf("P - Ponderada\n");
    scanf("%s", &op);

    switch(op) {
    case 'A':
    case 'a':
        aritmetica(nota1,nota2,nota3);
        break;
    case 'P':
    case 'p':
        ponderada(nota1,nota2,nota3);
        break;
    default:
        printf("Operacao invalida!");
    }

}
