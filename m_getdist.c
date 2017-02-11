/*
** m_getdist.c for m_getdist in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  9 09:34:57 2014 Tym17
** Last update Mon Dec 22 09:24:48 2014 Tym17
*/

#include "inc.h"

int			m_getdist(t_system *param, int i)
{
  double		k;
  double		tmp_x;
  double		tmp_y;

  k = 1;
  tmp_x = param->player.x;
  tmp_y = param->player.y;
  while (param->player.map[(int)tmp_x + (int)tmp_y * MAP_LEN] == WID_VOID)
    {
      tmp_x = param->player.x + (k * param->view.x);
      tmp_y = param->player.y + (k * param->view.y);
      k = k + KAH;
    }
  if (IS_COLOR == 1)
    m_color(param, k, tmp_x, tmp_y);
  else
    WALL_COLOR = WALL_NONE;
  d_line(param, i, WALL_SIZE * (WIN_Y / ( 2 * k )));
  return (0);
}
