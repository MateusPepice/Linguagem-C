#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * 3.14 * pow(R,2);
    *volume = (4/3) * 3.14 * pow(R,3);
}

int main () {
    float R, area, volume;

    printf("Informe a medida do raio: ");
    scanf("%f", &R);
    calc_esfera(R, &area, &volume);
    printf("Medida da superficie: %.2f\n", area);
    printf("Medida da superficie: %.2f\n", volume);
}
