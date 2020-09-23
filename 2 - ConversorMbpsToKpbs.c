#include <stdio.h>
#include <locale.h>

//Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps.

int main()
{
    float kbps, mbps, converter;

    printf("Conversor - Mbps para Kbps\n");
    printf("Digite o valor(em Mbps): ");
    scanf("%f", &mbps);

    kbps = mbps * 1024;

    printf("Valor em Kbps: %.f Kbps", kbps);

    return 0;
}
