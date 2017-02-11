/*
** create_color.c for create color in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  2 10:03:36 2014 Tym17
** Last update Wed Dec  3 09:34:57 2014 Tym17
*/

#include "inc.h"

int				create_color(int clr, t_color *color)
{
  int				tr;
  int				tg;
  int				tb;
  int				ta;

  tb = clr % 256;
  tg = (clr >> 8) % 256;
  tr = (clr >> 16) % 256;
  ta = (clr >> 24) % 256;
  color->r = tr;
  color->g = tg;
  color->b = tb;
  color->a = ta;
  return (0);
}
