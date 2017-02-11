/*
** i_map.c for init map in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec 15 10:01:51 2014 Tym17
** Last update Sat Dec 20 16:37:10 2014 Tym17
*/

#include "inc.h"

int			i_map(t_system *param)
{
  int			i;
  char			tmp[] = { MAP_INIT };

  i = 0;
  param->player.mapid = 0;
  MAP_LEN = MAP_INIT_X;
  param->player.map = malloc(sizeof(int) * MAP_INIT_X * MAP_INIT_Y);
  if (param->player.map == NULL)
    {
      my_putstr("Could not malloc map");
      w_kill(param);
    }
  while (i < MAP_INIT_X * MAP_INIT_Y)
    {
      param->player.map[i] = tmp[i];
      i = i + 1;
    }
  return (0);
}
