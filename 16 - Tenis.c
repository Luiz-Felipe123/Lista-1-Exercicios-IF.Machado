#include <stdio.h>

/*Entrada: A entrada � dada em uma �nica linha, que cont�m dois inteiros X e Y, que correspondem �s coordenadas
do ponto (X, Y) de contato da bola com o solo, em polegadas.

Sa�da: Seu programa deve imprimir uma �nica linha, contendo a palavra dentro se a bola bateu dentro da semi-
quadra, e a palavra fora caso contr�rio.*/

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
