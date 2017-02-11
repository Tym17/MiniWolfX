/*
** d_bkg.c for draw background in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  2 09:30:40 2014 Tym17
** Last update Mon Dec  8 15:09:24 2014 Tym17
*/

#include "inc.h"

int			d_bkg(t_system *param)
{
  int			mlx_clr;
  t_color		color;
  int			i;
  int			j;

  mlx_clr = mlx_get_color_value(param->mlx, GREY);
  create_color(mlx_clr, &color);
  i = WIN_X * WIN_Y * 4;
  j = 0;
  while (i > ( WIN_X * WIN_Y / 2 ) * 4)
    {
      p_put(param, color, i);
      i = i - 4;
      j = j + 1;
      if ((i % param->image.sizeline) == 0 && j % SHADOW_RATE == 0)
	darken_color(&color, WIN_Y - 5);
    }
}
