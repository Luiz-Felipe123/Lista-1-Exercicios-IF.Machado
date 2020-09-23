#include <stdio.h>

/* Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive). */

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 16)
        printf("Nao eleitor");
    else if(idade >= 18 && idade < 65)
        printf("Eleitor Obrigatorio");
    else
        printf("Eleitor Facultativo\n");

return 0;
}
