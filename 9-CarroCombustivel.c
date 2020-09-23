#include <stdio.h>

/*Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel
que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA  TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula: LITROS_USADOS  DISTANCIA /N. O programa em C deverá apresentar os valores da
distância percorrida e a quantidade de litros utilizados na viagem.
*/

int main()
{
    int tempoGasto, velocidadeMedia, distancia, litros_usados;
    int kmPorlitro = 12;

    printf("Digite o tempo gasto(Em minutos): ");
    scanf("%d", &tempoGasto);
    printf("Velocidade media: ");
    scanf("%d", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;

    litros_usados = distancia / kmPorlitro;

    printf("Litros de combustível usados: %d", litros_usados);

return 0;
}
