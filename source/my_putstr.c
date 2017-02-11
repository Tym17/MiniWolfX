/*
** my_putstr.c for my_putstr in /home/noreply/rendu/libperso
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Oct 22 22:51:40 2014 Tym17
** Last update Wed Dec  3 10:54:41 2014 Tym17
*/

#include "inc.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
