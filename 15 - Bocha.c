#include <stdio.h>

/* Entrada A primeira e �nica linha da entrada consiste de tr�s inteiros separados por espa�os, A, B e C, as
pontua��es dos 3 competidores.
Sa�da Imprima uma �nica linha na sa�da, contendo apenas um n�mero inteiro, a pontua��o do vice-campe�o.
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
