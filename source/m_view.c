/*
** m_view.c for m_view in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Fri Dec 19 09:09:09 2014 Tym17
** Last update Sun Dec 21 10:32:05 2014 Tym17
*/

#include "inc.h"

int			m_view(t_system *param)
{
  int			i;
  double		tmp_x;
  double		tmp_y;
  double		tcos;
  double		tsin;

  tcos = cos(param->player.w);
  tsin = sin(param->player.w);
  i = 0;
  while (i < WIN_X)
    {
      tmp_y = (SEGMENT * (( WIN_X / 2) - i)) / WIN_X;
      param->view.x = ECART * tcos - tmp_y * tsin;
      param->view.y = ECART * tsin + tmp_y * tcos;
      m_getdist(param, i);
      i = i + 1;
    }
  return (0);
}
