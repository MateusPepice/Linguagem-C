#include <stdio.h>
#include <stdlib.h>

int fatorial(int x) {
    int resultado;

   if (x==0) {
    resultado = 1;
   } else if (x>0) {
    resultado = x * fatorial(x - 1); /* Nesta fase, fun��o chama a si mesma at� obter um resultado s�lido para, ent�o, ser
prosseguida. */
   }
   return resultado;
}
int main () {
    int x,resultado;

    printf("Informe um numero a ser fatorado: ");
    scanf("%i", &x);

    printf("O fatorial eh: %i\n", fatorial(x));

}
