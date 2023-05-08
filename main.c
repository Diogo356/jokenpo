#include "jokenpo.h"

void result_game(int i, int j)
{
    if((i == 1 && j == 3) || (i == 2 && j == 1) || (i == 3 && j == 2))
        printf("O jogador 1 Venceu\n");
    else if((i == 1 && j == 2) || (j == 1 && i == 3) || (j == 3 && i == 2))
        printf("O jogador 2 venceu\n");
    else
        printf("Jogo empatado\n");
}

int main(void)
{
    int i = 0;
    int j = 0;
    printf("---------------------------Initialization---------------------------\n\n");
    i = jogador_one_func(i);
    j = jogador_two_func(j);
    if((i < 1 || i > 3) || (j < 1 || j > 3))
        return (0);
    result_game(i, j);
    return (0);
}