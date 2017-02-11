/*
** w_refresh.c for w_refresh in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  1 11:42:53 2014 Tym17
** Last update Sun Dec 21 15:45:06 2014 Tym17
*/

#include "inc.h"

int			w_refresh(t_system *param)
{
  t_system		*tmp;

  d_main(param);
  if (DEBUG == 1)
    my_putstr("Loop !\n");
  mlx_put_image_to_window(param->mlx, param->win, param->image.img, 0, 0);
  return (0);
}
