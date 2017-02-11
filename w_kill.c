/*
** w_kill.c for window killer in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 09:05:09 2014 Tym17
** Last update Tue Dec 16 15:08:25 2014 Tym17
*/

#include "inc.h"

int			w_kill(t_system *param)
{
  my_putstr("Hope you liked playing.\n");
  mlx_destroy_window(param->mlx, param->win);
  exit(0);
}
