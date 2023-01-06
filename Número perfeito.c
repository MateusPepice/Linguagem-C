#include <stdio.h>
#include <stdlib.h>

int perfeito (int x) {
    int i, aux=0, resultado=0;

    for (i=1; i<x ; i++){
        if (x % i == 0) {
            aux += i;
        }
    }
    if(aux == x){
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int x, resultado;

    printf("Informe um numero qualquer: ");
    scanf("%i", &x);
    perfeito(x);
    x = perfeito(x);

    if(x == 1){
        printf("\nO numero eh perfeito!\n");
    } else {
        printf("\nO numero nao eh perfeito\n");
    }
}
