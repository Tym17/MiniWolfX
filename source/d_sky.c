/*
** d_sky.c for draw sky in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  2 09:30:40 2014 Tym17
** Last update Mon Dec 22 09:41:32 2014 Tym17
*/

#include "inc.h"

int			d_sky(t_system *param)
{
  int			mlx_clr;
  t_color		sky;
  int			i;

  mlx_clr = mlx_get_color_value(param->mlx, SKY_COLOR);
  create_color(mlx_clr, &sky);
  i = 0;
  while (i < ((WIN_X * WIN_Y) / 2) * 4)
    {
      p_put(param, sky, i);
      i = i + 4;
    }
}
