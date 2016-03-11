/*
** menu.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Mon Jan 18 11:49:17 2016 MARION Tristan
** Last update Fri Mar 11 23:08:43 2016 MARION Tristan
*/

#include "fonctions.h"

void    menu()
{
    char    choix_mode;
    int     fin;

    choix_mode = '0';
    fin = -1;
    while (!is_correct_mode(choix_mode))
    {
        affichage_menu();
        choix_mode = getchar();
    }
    if (choix_mode == 'C')
        fin = casual();
    else if (choix_mode == 'H')
        fin = hardcore();
    if (fin == 1)
        devore();
    else if (fin == 0)
        perdu();
    else if (fin == -1)
        revoir();
    else
        gagne();
}

void    affichage_menu()
{
    clear();
    my_putstr("\n\n\t\t\x1b[36m¯·.¸¸.·¯·.¸¸.·¯     ");
    my_putstr("\x1b[1mBienvenue sur Octocat !\x1b[22m     ¯·.¸¸.·¯·.¸¸.·¯");
    my_putstr("\n\n\n");
    my_putstr("\x1b[92mChoisissez un mode :\n");
    my_putstr("\t- C : Casual (Sortez du labyrinthe)\n");
    my_putstr("\t- H : Hardcore (Sortez du labyrinthe en une seule fois)\n");
    my_putstr("\t- Q : Quitter\n\n\x1b[0m");
    my_putstr("\x1b[1mChoix du mode\x1b[22m ~~~> ");
}

void    affichage_mode(char *mode, char carte[20][20])
{
    clear();
    my_putstr("\n\n\t\t\x1b[31m¯·.¸¸.·¯·.¸¸.·¯     \x1b[1mMode ");
    my_putstr(mode);
    my_putstr("\x1b[31m     ¯·.¸¸.·¯·.¸¸.·¯\x1b[0m\n\n");
    afficherCarte(carte);
}

int     is_correct_mode(char c)
{
    if (c == 'C' || c == 'H' ||  c == 'Q')
        return (1);
    return (0);
}
