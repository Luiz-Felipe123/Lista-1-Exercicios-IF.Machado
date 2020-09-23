#include <stdio.h>


// Faça um programa para calcular a área de um cilindro dada sua formula.

int main()
{
    float areaTotal;
    float circulo, altura;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &circulo);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    areaTotal = 2 * 3.1415 * circulo * (circulo + altura);

    printf("Area total do cilindro: %.2f metros.", areaTotal);

return 0;
}
