#include <stdio.h>

// Escrever a tabuada de multiplicação do um número lido na tela.

int main()
{
    int i, num;
    scanf("%d", &num);

    for(i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, (num*i));
    }
return 0;
}
