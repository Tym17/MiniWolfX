/*
** e_left.c for left event in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 10:45:06 2014 Tym17
** Last update Sun Dec 21 15:51:30 2014 Tym17
*/

#include "inc.h"

int			e_left(t_system *param)
{
  if (DEBUG == 1)
    my_putstr("Left !\n");
  param->player.w = param->player.w + ANGLE_ADD;
  e_calib(param);
  return (0);
}
