/*
** e_calib.c for e_calib in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Sat Dec 20 12:16:50 2014 Tym17
** Last update Sat Dec 20 13:52:41 2014 Tym17
*/

#include "inc.h"

int			e_calib(t_system *param)
{
  param->player.dir.x = cos(param->player.w + (0));
  param->player.dir.y = sin(param->player.w + (0));
  return (0);
}
