/*
** d_main.c for draw main in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  2 14:38:47 2014 Tym17
** Last update Mon Dec 22 09:54:54 2014 Tym17
*/

#include "inc.h"

int			d_main(t_system *param)
{
  int			i;

  i = 0;
  d_sky(param);
  d_bkg(param);
  m_view(param);
  if (SKY_COLOR == NIGHT_COLOR)
    while (i < (WIN_X * WIN_Y) * 4)
      {
	d_dark(param, i);
	i = i + 4;
      }
  return (0);
}
