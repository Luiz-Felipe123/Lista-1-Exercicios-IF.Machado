#include <stdio.h>

/* Crie um programa que receba 2 valores e um operador aritm�tico b�sico (+ - * /) e apresente o resultado
do c�lculo. Utilize switch case. */

int main()
{
    int num1, num2;
    char op;
    scanf("%d", &num1);
    scanf("%d", &num2);

    scanf(" %c", &op);
    switch(op)
    {
        case '+':
        printf("Soma: %d", num1 + num2);
        break;

        case '-':
        printf("Subtracao: %d", num1 - num2);
        break;

        case '*':
        printf("Multiplicacao: %d", num1 * num2);
        break;

        case '/':
        printf("Divisao: %d", num1 / num2);
        break;

        default:
            printf("Digite um operador aritmetico valido( + - * / )");
    }
return 0;
}
