/*
** e_color.c for e_color in /home/noreply/igraph/MUL_2014_wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec 22 09:15:19 2014 Tym17
** Last update Mon Dec 22 09:29:27 2014 Tym17
*/

#include "inc.h"

int			e_color(t_system *param)
{
  if (IS_COLOR == 1)
    IS_COLOR = 0;
  else if (IS_COLOR == 0)
    IS_COLOR = 1;
  return (0);
}
