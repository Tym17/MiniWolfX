/*
** e_key.c for key event in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 09:01:37 2014 Tym17
** Last update Mon Dec 22 09:43:51 2014 Tym17
*/

#include "inc.h"

int			e_key(int kc, t_system *param)
{
  if (kc == KEY_ESC)
    w_kill(param);
  if (kc == KEY_Z || kc == KEY_UP || kc == KEY_S || kc == KEY_DOWN
      || kc == KEY_Q || kc == KEY_LEFT || kc == KEY_D || kc == KEY_RIGHT)
    e_move(kc, param);
  if (kc == KEY__F + 1)
    e_help(param);
  if (kc == KEY_A)
    e_color(param);
  if (kc == KEY_E)
    e_day(param);
  w_refresh(param);
  return (0);
}
