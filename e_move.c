/*
** e_move.c for e_move in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec  9 09:58:16 2014 Tym17
** Last update Tue Dec  9 10:01:42 2014 Tym17
*/

#include "inc.h"

int			e_move(int kc, t_system *param)
{
  if (kc == KEY_Z || kc == KEY_UP)
    e_forward(param);
  if (kc == KEY_S || kc == KEY_DOWN)
    e_back(param);
  if (kc == KEY_Q || kc == KEY_LEFT)
    e_left(param);
  if (kc == KEY_D || kc == KEY_RIGHT)
    e_right(param);
  return (0);
}
