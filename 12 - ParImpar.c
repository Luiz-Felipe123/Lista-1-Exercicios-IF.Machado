#include <stdio.h>

/* 12. Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)). */

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%2==0)
        printf("PAR\n");
    else
        printf("IMPAR\n");

return 0;
}
