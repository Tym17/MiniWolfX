/*
** w_hook.c for window hooks in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 08:44:15 2014 Tym17
** Last update Sat Dec 20 14:38:49 2014 Tym17
*/

#include "inc.h"

int			w_hook(t_system *param)
{
  mlx_expose_hook(param->win, &w_refresh, param);
  mlx_hook(param->win, KeyPress, KeyPressMask, &e_key, param);
  return (0);
}
