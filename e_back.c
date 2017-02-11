/*
** e_back.c for back event in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 10:43:36 2014 Tym17
** Last update Sun Dec 21 15:51:39 2014 Tym17
*/

#include "inc.h"

int			e_back(t_system *param)
{
  double		x;
  double		y;

  if (DEBUG == 1)
    my_putstr("Back !\n");
  x = param->player.x - ( param->player.dir.x * MOVE );
  y = param->player.y - ( param->player.dir.y * MOVE );
  if (param->player.map[(int)y * MAP_LEN + (int)param->player.x] == WID_VOID)
    param->player.y = y;
  if (param->player.map[(int)param->player.y * MAP_LEN + (int)x] == WID_VOID)
    param->player.x = x;
  return (0);
}
