/*
** hardcore.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/pi
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Tue Jan 19 14:29:38 2016 MARION Tristan
** Last update Fri Jan 22 09:38:24 2016 MARION Tristan
*/

#include "fonctions.h"

int hardcore()
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
    affichage_mode("HARDCORE", carte);
    my_putstr("\x1b[1mItinéraire\x1b[21m ~~~> ");
    deplacement = getchar();
    while ((deplacement = getchar()) != '\n' && end == 1) {
        end = mouvement(&deplacement, carte, &x, &y);
        affichage_mode("HARDCORE", carte);
        usleep(100000);
    }
    if (y == 19)
        end = 2;
    return (end);
}
