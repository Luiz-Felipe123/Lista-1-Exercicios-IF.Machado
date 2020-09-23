#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o peso e altura: ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura*altura);
    if(imc < 20)
        printf("Abaixo do peso");
    else if(imc = 20 && imc < 25)
        printf("Peso Normal");
    else if(imc = 25 && imc <= 30)
        printf("Sobre Peso");
    else if(imc = 30 && imc < 40)
        printf("Obeso");
    else
        printf("Obeso Mórbido");

return 0;
}
