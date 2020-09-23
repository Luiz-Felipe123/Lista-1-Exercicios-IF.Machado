#include <stdio.h>

// Calcular o fatorial de um número informado.

int main()
{
    int num;
    int i;

    scanf("%d", &num);
    for(i = num-1; i >= 1; i--)
    {
        num = num * i;
    }
    printf("%d", num);

return 0;
}
