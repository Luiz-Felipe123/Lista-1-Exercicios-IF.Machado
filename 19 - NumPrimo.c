#include <stdio.h>

//Crie um programa em C que leia um valor e informe se ele é primo. Um número primo é divisível só por 1 e ele mesmo.

int main()
{
    int num, i;
    int primo = 0;
    scanf("%d", &num);
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
            primo++;
    }
    if(primo > 0)
        printf("Nao e primo\n");
    else
        printf("E primo");

return 0;
}

