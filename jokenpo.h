#ifndef JOKENPO_H
# define JOKENPO_H

# include <stdio.h>
# include <unistd.h>

//function players
int	jogador_one_func(int i);
int	jogador_two_func(int i);

//func validation
int	validation_one(int i);
int	validation_two(int i);

//struct jokenpo
typedef struct Jokenpo
{
    int tesoura;
    int papel;
    int pedra;
} jokenpo;

#endif