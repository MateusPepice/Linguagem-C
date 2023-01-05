#include <stdio.h>
#include <stdlib.h>

int main () {

struct exercicio3{
    char aluno[30];
    float nota1, nota2, media;
}alunos[10];

    int i;
    float soma;
    FILE *ex3;
    ex3 = fopen("Notas.txt", "w");

if (ex3 == NULL) {
    printf("Erro ao abrir o arquivo!");
    system("pause");
    return 0;
}

for (i=1; i<=2; i++) {
    printf("Informe somente o primeiro nome do aluno %i: ", i);
        fflush(stdin);
        gets(alunos[i].aluno);
        fflush(stdin);
        fputs(alunos[i].aluno, ex3);
    printf("Informe a nota 1: ");
        scanf("%f", &alunos[i].nota1);
        fprintf(ex3," %2.f", alunos[i].nota1);
    printf("Informe a nota 2: ");
        scanf("%f", &alunos[i].nota2);
        fprintf(ex3,"%2.f", alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        fprintf(ex3, " %.2f", alunos[i].media);
        fprintf(ex3, "\n");

}
    fclose(ex3);
}
