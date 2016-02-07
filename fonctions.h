/*
** fonctions.h for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
** 
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 09:36:38 2016 MARION Tristan
** Last update Fri Jan 22 09:36:40 2016 MARION Tristan
*/

#ifndef FONCTIONS_H_
# define FONCTIONS_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int n);
void    clear();
void    menu();
void    affichage_menu();
int     casual();
int     hardcore();
void    generateMap(char carte[20][20], int *x, int *y);
void    afficherCarte(char carte[20][20]);
void    createWay(char carte[20][20], int x, int y, int right);
int     mouvement(char *direction, char carte[20][20], int *x, int *y);
int     deplacement(char carte[20][20], int *x, int *y, int xx, int yy);
int     is_correct_choice(char c);
int     is_correct_mode(char c);
void    affichage_mode(char *mode, char carte[20][20]);
void    devore();
void    perdu();
void    gagne();
void    revoir();

#endif
