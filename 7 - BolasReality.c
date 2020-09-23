#include <stdio.h>

/* Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
     Bola Verde: 10 pontos
     Bola amarela: 5 pontos
     Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante.
*/

int main()
{
    int Bverde = 10, Bamarela = 5, Bbranca = 3;
    int BolaVer, BolaAmar, BolaBran, res;

    printf("Digite a quantidade de bolas verdes voce buscou: ");
    scanf("%d", &BolaVer);
    printf("Digite a quantidade de bolas amarelas voce buscou: ");
    scanf("%d", &BolaAmar);
    printf("Digite a quantidade de bolas brancas voce buscou: ");
    scanf("%d", &BolaBran);

    BolaVer = BolaVer * Bverde;
    BolaAmar = BolaAmar * Bamarela;
    BolaBran = BolaBran * Bbranca;
    res = BolaVer + BolaAmar + BolaBran;

    printf("Pontuacao Final: %d", res);

return 0;
}
