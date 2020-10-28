#include <stdio.h>

/*A série de Fibonacci é formada pela sequência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo informado pelo usuário.
*/

int main()
{
    int i, n, soma;
    int f1 = 1, f2 = 1;
    scanf("%d", &n);
    printf("%d %d ", f1, f2); // Inicio da sequência
    for(i = 3; i <= n; i++)
    {
        soma = f1 + f2; 
        f1 = f2; 
        f2 = soma; 
        printf("%d ", f2);
    } // Fim do laço
return 0;
}
