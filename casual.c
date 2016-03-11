/*
** casual.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Mon Jan 18 13:35:00 2016 MARION Tristan
** Last update Fri Mar 11 23:04:39 2016 MARION Tristan
*/

#include "fonctions.h"

int casual()
{
    char    carte[20][20];
    int     x;
    int     y;
    int     end;
    char    deplacement;

    x = 0;
    y = 0;
    end = 1;
    deplacement = '0';
    generateMap(carte, &x, &y);
    affichage_mode("Casual", carte);
    while (end == 1)
    {
        my_putstr("\x1b[1mDirection (w, a, s, d, z, q) ~~~> ");
        while (!is_correct_choice(deplacement))
            deplacement = getchar();
        end = mouvement(&deplacement, carte, &x, &y);
        affichage_mode("Casual", carte);
        if (y == 19)
            end = 2;
    }
    return (end);
}
