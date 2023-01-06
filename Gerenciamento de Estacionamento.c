#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int main () {
    struct garagem {
        int status,vaga;
        char placa[10];
    }vagas[10];

    int escolha, aux;

    do {
        printf("\n1 - Entrada de carro\n");
        printf("2 - Saida de carro\n");
        printf("3 - Consulta de vagas\n");
        printf("4 - Finalizar\n");
        scanf("%i", &escolha);

memset(&vagas[2].vaga, 0, sizeof(1));

            if (escolha != 4) {
printf("---------------------------------------------------------\n");
               switch (escolha) {
                case 1:
                    printf("Vaga a ser ocupada: ");
                    scanf("%i", &aux);
                        if (aux>=1 && aux<=10 && vagas[aux].status != 1) {
                                vagas[aux].vaga = aux;
                            printf("Placa do carro: ");
                                fflush(stdin);
                                gets(vagas[aux].placa);
                                fflush(stdin);
                            vagas[aux].status = 1;
                        } else {
                            printf("Vaga indisponivel!");
                        }
printf("\n---------------------------------------------------------\n");
                    break;
                case 2:
                    printf("Vaga a ser desocupada: ");
                    scanf("%i", &aux);
                        if (aux>=1 && aux<=10) {
                            strcpy(vagas[aux].placa, "Sem placa");
                            vagas[aux].status = 0;
                        } else {
                            printf("Vaga indisponivel!");
                        }
printf("\n---------------------------------------------------------\n");
                    break;
                case 3:
                    printf("Vaga procurada: ");
                    scanf("%i", &aux);

                    if(aux>=1 && aux<=10) {
                                printf("\nNumero da vaga: %i", vagas[aux].vaga);
                                printf("\nPlaca do carro: %s\n", vagas[aux].placa);
                                printf("Status da vaga: %i\n", vagas[aux].status);
                    } else {
                        printf("Vaga indisponivel!");
                    }
printf("\n---------------------------------------------------------\n");
                    break;
                default:
                    printf("Opcao invalida!");
printf("\n---------------------------------------------------------\n");
                    break;

               }
            }
    } while (escolha != 4);
    printf("\nFim da execucao do programa :)");
    printf("\nObrigado por utilizar os servicos da Mateus Inc.!!!\n");
}
