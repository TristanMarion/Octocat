/*
** map.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Mon Jan 18 13:36:21 2016 MARION Tristan
** Last update Mon Jan 18 13:36:22 2016 MARION Tristan
*/

#include "fonctions.h"

void    generateMap(char carte[20][20], int *x, int *y)
{
    time_t  t;
    int i;
    int j;

    i = 0;
    j = 0;
    *y = 1;
    srand((unsigned) time(&t));
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            carte[i][j] = '#';
        }
    }
    *x = rand() % 18 + 1;
    createWay(carte, *x, 1, 1);
    createWay(carte, *x, 1, 0);
    createWay(carte, 3, 1, 0);
    createWay(carte, 9, 1, 0);
    createWay(carte, 15, 1, 0);
    carte[*x][*y] = 'x';
}

void    afficherCarte(char carte[20][20])
{
    int i;
    int j;

    i = 0;
    j = 0;
    my_putstr("\t\t     ");
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (carte[i][j] == '#')
                my_putstr("\x1b[41m\x1b[31m##\x1b[0m");
            else if (carte[i][j] == 'x')
                my_putstr("\x1b[44m\x1b[34mxx\x1b[0m");
            else if (carte[i][j] == 'O')
                my_putstr("\x1b[42m\x1b[32mOO\x1b[0m");
            else if (carte[i][j] == ' ')
                my_putstr("\x1b[43m\x1b[33m  \x1b[0m");
            else
                my_putchar(carte[i][j]);
        }
        my_putstr("\n\t\t     ");
    }
    my_putstr("\n");
}

void    createWay(char carte[20][20], int x, int y, int right)
{
    int     direction;

    while (y != 19)
    {
        direction = rand() % 3;
        if (direction == 0)
            carte[x][y++] = ' ';
        else if (direction == 1 && x > 1)
            carte[x--][y] = ' ';
        else
        {
            if (x < 18)
                carte[x++][y] = ' ';
        }
    }
    if (right == 1)
        carte[x][y] = 'O';
}
