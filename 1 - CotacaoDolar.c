#include <stdio.h>
#include <locale.h>

/*Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float real, dolar, cotacao;

    printf("Digite a cota��o do d�lar atual: $");
    scanf("%f", &cotacao);
    printf("Digite o valor em Reais dispon�vel: R$");
    scanf("%f", &real);

    dolar = real / cotacao;

    printf("Valor em d�lar: $%.2f", dolar);

return 0;
}
