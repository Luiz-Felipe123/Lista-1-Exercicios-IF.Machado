#include <stdio.h>

/*Entrada: A entrada é dada em uma única linha, que contém dois inteiros X e Y, que correspondem às coordenadas
do ponto (X, Y) de contato da bola com o solo, em polegadas.

Saída: Seu programa deve imprimir uma única linha, contendo a palavra dentro se a bola bateu dentro da semi-
quadra, e a palavra fora caso contrário.*/

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x >= 0 && x <= 432)
        printf("dentro\n");
    else if(x >= 0 && x <= 468)
        printf("dentro\n");
    else
        printf("fora\n");

return 0;
}
