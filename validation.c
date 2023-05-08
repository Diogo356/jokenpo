#include "jokenpo.h"

void init_struct(jokenpo *jogador)
{
    jogador->tesoura = 0;
    jogador->papel = 0;
    jogador->pedra = 0;
}

int validation_one(int i)
{
    jokenpo jogador_one;
    
    init_struct(&jogador_one);
    if(i == 1)
        jogador_one.tesoura = i;
    else if(i == 2)
        jogador_one.pedra = i;
    else if(i == 3)
        jogador_one.papel = i;
     else
    {
        printf("Error! Opção incorreta\n");
        return (0);
    }
    return (i);
}

int validation_two(int j)
{
    jokenpo jogador_two;

    init_struct(&jogador_two);
    if(j == 1)
        jogador_two.tesoura = j;
    else if(j == 2)
        jogador_two.pedra = j;
    else if(j == 3)
        jogador_two.papel = j;
    else
    {
        printf("Error! Opção incorreta\n");
        return (0);
    }
    return (j);
}