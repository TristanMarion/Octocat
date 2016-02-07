/*
** end_messages.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
** 
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 09:35:18 2016 MARION Tristan
** Last update Fri Jan 22 09:35:21 2016 MARION Tristan
*/

#include "fonctions.h"

void    devore()
{
    my_putstr("\n\n\x1b[1m\x1b[31mVous n'êtes pas arrivé à la sortie, ");
    my_putstr("Octocat s'est fait dévorer par un Griever :c\n\n");
}

void    perdu()
{
    my_putstr("\n\n\x1b[1m\x1b[31m");
    my_putstr("Dommage vous êtes entré dans un mur, vous avez perdu :c\n\n");
}

void    gagne()
{
    my_putstr("\n\n\x1b[1m\x1b[32m");
    my_putstr("Bravo vous avez gagné ! :D\n\n");
}

void    revoir()
{
    clear();
    my_putstr("\n\n\x1b[1m");
    my_putstr("Au revoir ! ^_^\n\n");
}
