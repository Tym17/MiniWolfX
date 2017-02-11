/*
** p_put.c for put pixel in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  2 15:18:21 2014 Tym17
** Last update Tue Dec 16 17:42:41 2014 Tym17
*/

#include "inc.h"

int			p_put(t_system *param, t_color color, int p)
{
  if (p + 3 < WIN_Y * WIN_X * 4 && p > 0)
    {
      param->image.data[p] = color.b;
      param->image.data[p + 1] = color.g;
      param->image.data[p + 2] = color.r;
      param->image.data[p + 3] = color.a;
    }
  else
    if (DEBUG == 1)
      my_putstr("Pixel out of range.\n");
  return (0);
}
