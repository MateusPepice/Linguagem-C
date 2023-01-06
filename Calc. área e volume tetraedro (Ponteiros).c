#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_tetraedro (float a, float *area, float *volume) {
    *area = sqrt(3) * pow(a,2);
    *volume = (sqrt(2) * pow(a,3)) / 12;
}

int main () {
    float a, area, volume;

    printf("Informe a medida da aresta: ");
    scanf("%f", &a);
    calc_tetraedro(a, &area, &volume);

    printf("\nO valor da area eh: %.2f\n", area);
    printf("\nO valor do volume eh: %.2f\n", volume);
}
