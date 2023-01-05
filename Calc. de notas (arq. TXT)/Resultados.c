#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

struct exercicio4{
    char nome[30], situacao[12];
    float nota1, nota2, media;
}alunos[10];

    int i;
    FILE *ex4;

    ex4 = fopen ("Notas.txt", "a+");

if (ex4 == NULL) {
    printf("Erro ao abrir o arquivo!");
    system("pause");
    return 0;
}

for (i=1; i<=2; i++) {
    fscanf(ex4, "%s%f%f%f", alunos[i].nome, &alunos[i].nota1, &alunos[i].nota2, &alunos[i].media);

    if(alunos[i].media>=7.0) {
        strcpy(alunos[i].situacao," Aprovado\n");
        printf("Aluno %s: %s",alunos[i].nome ,alunos[i].situacao);
    } else {
        strcpy(alunos[i].situacao," Reprovado\n");
        printf("Aluno %s: %s",alunos[i].nome ,alunos[i].situacao);
    }
}

    fclose(ex4);
}
