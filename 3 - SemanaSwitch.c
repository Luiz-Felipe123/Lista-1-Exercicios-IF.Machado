#include <stdio.h>

//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
//correspondente a este número. Isto e, domingo se 1, segunda-feira se 2, e assim por diante.

int main()
{
    int dias;
    scanf("%d", &dias);

    switch(dias)
    {
        case 1:
            printf("Domingo\n");
                break;

        case 2:
            printf("Segunda-feira\n");
                break;

        case 3:
            printf("Terca-feira\n");
                break;

        case 4:
            printf("Quarta-feira\n");
                break;

        case 5:
            printf("Quinta-feira\n");
                break;

        case 6:
            printf("Sexta-feira\n");
                break;

        case 7:
            printf("Sabado\n");
                break;

        default:
            printf("Digite um numero valido(1 a 7)\n");
    }
return 0;
}
