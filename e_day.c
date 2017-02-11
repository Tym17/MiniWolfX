/*
** e_day.c for e_day in /home/noreply/igraph/MUL_2014_wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec 22 09:33:30 2014 Tym17
** Last update Mon Dec 22 09:42:40 2014 Tym17
*/

#include "inc.h"

int			e_day(t_system *param)
{
  if (SKY_COLOR == DAY_COLOR)
    SKY_COLOR = NIGHT_COLOR;
  else
    SKY_COLOR = DAY_COLOR;
  return (0);
}
