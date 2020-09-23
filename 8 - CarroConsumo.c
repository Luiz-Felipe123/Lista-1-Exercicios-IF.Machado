#include <stdio.h>

/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de fábrica de um carro e escreva o custo
ao consumidor.
*/

int main()
{
    // Imp = Variavel que vai receber o valor do imposto aplicado ao custo de fabrica;
    // Dis = Variavel que vai receber a porcentagem do distribuidor aplicado ao custo de fabrica
    float custoFabrica, precoFinal, imp, dis;

    printf("Digite o custo de fabrica do carro: R$");
    scanf("%f", &custoFabrica);
    imp = custoFabrica * 0.25;
    dis = custoFabrica * 0.42;
    precoFinal = custoFabrica + imp + dis;
    printf("Custo do consumidor: R$%.2f", precoFinal);

return 0;
}
