#include <stdio.h>
#include <stdlib.h>


int main () {
    char senha[15];
    int i, tamanho, contN, contL;

    printf("Informe a senha: ");
    gets(senha);
    fflush(stdin);
    tamanho = strlen(senha);

    for(i=0; senha[i]!= '\0'; i++) {
        if(senha[i] == '0' ||senha[i] == '1' || senha[i] == '2' ||senha[i] == '3' ||senha[i] == '4' ||senha[i] == '5' ||senha[i] == '6' ||senha[i] == '7' ||senha[i] == '8' ||senha[i] == '9') {
            contN++;
        }else {
            contL++;
        }
    }
    if (tamanho >= 8 && contN > 0 && contL > 0) {
        printf("Senha valida ;D ");
    } else {
        printf("Senha invalida :( ");
    }
}
