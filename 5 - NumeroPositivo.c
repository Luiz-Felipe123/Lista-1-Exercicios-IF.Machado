#include <stdio.h>

// Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
// O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado:

int main()
{
    int x, quad, raiz;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x > 0)
    {
        quad = x * x;
        raiz = x / x;
        printf("%d ao quadrado: %d\nRaiz de %d: %d", x, quad, x, raiz);
    }
    else
        return 0;
}
