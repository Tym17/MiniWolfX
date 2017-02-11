/*
** m_color.c for math color in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Sat Dec 20 17:35:38 2014 Tym17
** Last update Sun Dec 21 15:43:49 2014 Tym17
*/

#include "inc.h"

int			m_color(t_system *param, double k, double tx, double ty)
{
  double		x;
  double		y;

  x = tx - 0.01;
  y = ty - 0.01;
  if ((int) tx <= (int)x && (int)y == (int)ty)
    WALL_COLOR = WALL_EST;
  else if ((int)tx > (int)x && (int)y == (int)ty)
    WALL_COLOR = WALL_NORTH;
  else if ((int)ty < (int)y )
    WALL_COLOR = WALL_SOUTH;
  else if ((int)ty > (int)y && (int)x == (int)tx)
    WALL_COLOR = WALL_WEST;
  else
    WALL_COLOR = WALL_CORNER;
  return (0);
}
