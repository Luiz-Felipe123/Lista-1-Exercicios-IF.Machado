#include <stdio.h>

/*A s�rie de Fibonacci � formada pela sequ�ncia:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a s�rie de FIBONACCI at� o N-�simo termo informado pelo usu�rio.
*/

int main()
{
    int i, n, soma;
    int f1 = 1, f2 = 1; // f1 e f2 representam respectivamente o primeiro e segundo termo da sequ�ncia
    scanf("%d", &n);
    printf("%d %d ", f1, f2); // Inicio da sequ�ncia
    for(i = 3; i <= n; i++) // Como os dois primeiros termos ja foram iniciados(vide f1, f2), o la�o come�a com 3(terceiro termo)
    {
        soma = f1 + f2; // Soma simples do f1 + f2
        f1 = f2; // F1 recebe F2, exemplo: se f2 = 2, f1 ficar� igual a 2
        f2 = soma; // F2 recebe soma, exemplo: se soma for igual a 3, f2 recebe soma e volta o loop somando os novos valores de f1 e f2
        printf("%d ", f2);
    } // Fim do la�o
return 0;
}
