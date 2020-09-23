#include <stdio.h>

// Faça um programa que receba dois números e mostre qual deles é o maior.

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    if(x > y)
        printf("%d e maior que %d", x, y);
    else
        printf("%d e maior que %d", y, x);

return 0;
}
