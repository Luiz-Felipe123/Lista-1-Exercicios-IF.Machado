#include <stdio.h>
#include <locale.h>

/*Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float real, dolar, cotacao;

    printf("Digite a cotação do dólar atual: $");
    scanf("%f", &cotacao);
    printf("Digite o valor em Reais disponível: R$");
    scanf("%f", &real);

    dolar = real / cotacao;

    printf("Valor em dólar: $%.2f", dolar);

return 0;
}
