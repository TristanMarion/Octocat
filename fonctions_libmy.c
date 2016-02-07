/*
** fonctions_libmy.c for Octocat in /Users/marion_t/Documents/UE/Pataugeoire/Octocat/hamiti_m
**
** Made by MARION Tristan
** Login   <marion_t@etna-alternance.net>
**
** Started on  Mon Jan 18 11:38:48 2016 MARION Tristan
** Last update Fri Jan 22 09:36:49 2016 MARION Tristan
*/

#include "fonctions.h"

void	my_putchar(char c)
{
    write(1, &c, 1);
}

void	my_putstr(char *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}

void    clear()
{
    my_putstr("\x1b[2J\x1b[1;1H");
}

void	my_put_nbr(int n)
{
    if (n < 0)
    {
        n = -n;
        my_putchar('-');
    }
    if (n >= 10)
    {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    }
    else
        my_putchar(n + 48);
}

char		*readLine()
{
    ssize_t	ret;
    char		*buff;

    if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
        return (NULL);
    if ((ret = read(0, buff, 50)) > 1)
    {
        buff[ret - 1] = '\0';
        return (buff);
    }
    buff[0] = '\0';
    return (buff);
}
