/*
** d_line.c for d_line in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  8 09:25:03 2014 Tym17
** Last update Sat Dec 20 17:17:53 2014 Tym17
*/

#include "inc.h"

int			d_line(t_system *param, int pos, int len)
{
  int			mlx_clr;
  t_color		color;
  int			i;
  int			sep;

  if (len > WIN_Y)
    len = WIN_Y;
  sep = ( WIN_Y - len ) / 2;
  mlx_clr = mlx_get_color_value(param->mlx, WALL_COLOR);
  create_color(mlx_clr, &color);
  darken_color(&color, len);
  i = sep;
  while (i < WIN_Y - sep)
    {
      p_put(param, color, ( i * param->image.sizeline + (pos*4)));
      i = i + 1;
    }
  return (0);
}
