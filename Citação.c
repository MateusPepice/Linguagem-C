#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[100], ult_nome[30]="";
    int i=0, ano=0, posicao_F=0, posicao_I=0, aux=0;

    printf("Informe seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("Informe um ano: ");
    scanf("%i", &ano);

    do {
        i++;
        if (nome[i]=='\0') {
            posicao_F = i;
        }else if (nome[i]==' ') {
            posicao_I = i+1;
        }

    } while (nome[i] != '\0');

    for (i=posicao_I; posicao_I != posicao_F; posicao_I++){
        ult_nome[aux] = nome[posicao_I];
        aux++;
    }
printf("\nCitacao: %s (%i)\n", ult_nome,ano);


}
