#include <stdio.h>

/* Entrada A primeira e única linha da entrada consiste de três inteiros separados por espaços, A, B e C, as
pontuações dos 3 competidores.
Saída Imprima uma única linha na saída, contendo apenas um número inteiro, a pontuação do vice-campeão.
*/

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > c && c > b)
        printf("%d", c);
    else if(c > b && b > a)
        printf("%d", b);
    else
        printf("%d", a);

return 0;
}
