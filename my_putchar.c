/*
** my_putchar.c for my_putchar in /home/noreply/rendu/libperso
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Sat Oct 18 12:31:48 2014 Tym17
** Last update Wed Dec  3 10:55:59 2014 Tym17
*/

#include "inc.h"
#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
