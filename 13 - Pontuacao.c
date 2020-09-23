#include <stdio.h>
#include <Windows.h>

/* Você foi encarregado para desenvolver um programa com objetivo de armazenar os pontos do campeonato
interno de futebol do IFSULDEMINAS, assim seu programa deve receber o nome e os gols de dois times, e
apresentar a pontuação que cada um deve receber pelo jogo, levando-se em consideração que uma vitória
dá 3 pontos, empate 1 ponto e derrota 0 ponto. */

int pontuacaoTime1 = 0, pontuacaoTime2 = 0;

void Tabela(){

    system("cls");
    printf("\tTabela do Campeonato:\n\n");
    printf("Time 1 = %d ponto(s)\n", pontuacaoTime1);
    printf("Time 2 = %d ponto(s)\n", pontuacaoTime2);
    printf("------------------------------\n");
}


int main()
{
    int goltime1, goltime2;

    Tabela();
    printf("Digite o placar do jogo:\n");
    printf("Gols do time 1: ");
    scanf("%d", &goltime1);
    printf("Gols do time 2: ");
    scanf("%d", &goltime2);

    if(goltime1 > goltime2){
        pontuacaoTime1 = 3;
    }
    else if(goltime1 < goltime2){
        pontuacaoTime2 = 3;
    }
    else if(goltime1 == goltime2){
        pontuacaoTime1 = 1;
        pontuacaoTime2 = 1;
    }
    Tabela();

return 0;
}
