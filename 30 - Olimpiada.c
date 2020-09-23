#include <stdio.h>

/*
Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão
(normalmente o teclado). A primeira linha da entrada contém dois números inteiros N e P, representando
respectivamente o número de competidores (1 ≤ N ≤ 100) e o número mínimo de pontos para ser convidado
(1 ≤ P ≤ 1000). Cada uma das N leituras seguintes contém dois números inteiros X e Y indicando a pontuação
de um competidor em cada uma das fases (0 ≤ X ≤ 400) e (0 ≤ Y ≤ 400).
Saída
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, indicando o
número de competidores que serão convidados a participar do curso na Unicamp.
*/



int main()
{
    int n, p; //n = numero de competidores || p = pontuação necessária para próxima fase
    int x, y; //x e y = A pontuação de um competidor
    int i, comp = 0; //i = Para o laço for || comp = Para contar a quantidade de vezes que a condição for satisfeita

    scanf("%d %d", &n, &p);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x + y >= p){
        comp = comp + 1;
        }
    }
    printf("%d", comp);
}
