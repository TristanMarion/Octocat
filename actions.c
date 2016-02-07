/*
** actions.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Mon Jan 18 17:00:36 2016 MARION Tristan
** Last update Fri Jan 22 09:34:45 2016 MARION Tristan
*/

#include "fonctions.h"

int    mouvement(char *direction, char carte[20][20], int *x, int *y) {
    int result;

    result = 1;
    if (*direction == 'd')
        result = deplacement(carte, x, y, 0, 1);
    else if (*direction == 'w' || *direction == 'z')
        result = deplacement(carte, x, y, -1, 0);
    else if (*direction == 's')
        result = deplacement(carte, x, y, 1, 0);
    else if (*direction == 'a' || *direction == 'q')
        result = deplacement(carte, x, y, 0, -1);
    else if (*direction == 'e')
        return (-1);
    *direction = ' ';
    return (result);
}

int    deplacement(char carte[20][20], int *x, int *y, int xx, int yy) {
    if (carte[*x + xx][*y + yy] == '#') {
        return (0);
    }
    else
    {
        my_putchar('Q');
        *y += yy;
        *x += xx;
        carte[*x][*y] = 'x';
        carte[*x - xx][*(y) - yy] = ' ';
    }
    return (1);
}

int     is_correct_choice(char c)
{
    if (c == 'w' || c == 'a' || c == 's' || c == 'd' || c == 'z' || c == 'q')
        return (1);
    else if (c == 'e')
        return (1);
    return (0);
}
