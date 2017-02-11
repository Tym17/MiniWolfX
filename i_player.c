/*
** i_player.c for init player in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  8 17:11:13 2014 Tym17
** Last update Mon Dec 22 09:42:00 2014 Tym17
*/

#include "inc.h"

int			i_player(t_system *param)
{
  param->player.x = MAP_INIT_POSX;
  param->player.y = MAP_INIT_POSY;
  WALL_COLOR = WALL_NONE;
  SKY_COLOR = DAY_COLOR;
  param->player.w = 0;
  i_map(param);
  i_view(param);
  e_calib(param);
  param->iscolored = ARE_WALLS_COLORED;
  return (0);
}
