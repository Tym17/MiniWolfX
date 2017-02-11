/*
** my_putnbr.c for my_putnbr in /home/noreply/rendu/libperso
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Sat Oct 18 12:16:21 2014 Tym17
** Last update Wed Dec  3 10:54:11 2014 Tym17
*/

#include "inc.h"

int	my_putnbr(int i)
{
  if (i < 0)
    {
      my_putchar('-');
      i = i * ( - 1 );
    }
  if (i >= 10)
    my_putnbr(i / 10);
  i = i % 10;
  my_putchar(i + 48);
  return (0);
}
