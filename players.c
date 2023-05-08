#include "jokenpo.h"

int jogador_one_func(int i)
{
    printf("Jogador 1, Escolha a uma das opções\n\n");
    printf("Opção 1: Tesoura\n");
    printf("Opção 2: Pedra\n");
    printf("Opção 3: Papel\n\n");
    scanf("%i", &i);
    validation_one(i);
    return(i);
}

int jogador_two_func(int j)
{
    printf("\nJogador 2, Escolha a uma das opções\n\n");
    printf("Opção 1: Tesoura\n");
    printf("Opção 2: Pedra\n");
    printf("Opção 3: Papel\n\n");
    scanf("%i", &j);
    validation_two(j);
    return(j);
}