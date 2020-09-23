#include <stdio.h>

// Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// O número digitado ao quadrado • A raiz quadrada do número digitado:

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
