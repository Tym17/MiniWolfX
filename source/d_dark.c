/*
** d_dark.c for d_dark in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Tue Dec 16 17:33:26 2014 Tym17
** Last update Mon Dec 22 09:59:11 2014 Tym17
*/

#include "inc.h"

int			d_dark(t_system *param, int p)
{
  int			s;
  int			i;

  i = 0;
  s = 30;
  if (p + 3 < WIN_Y * WIN_X * 4 && p > 0)
    {
      while (i < s)
	{
	  if (param->image.data[p] > 0)
	    param->image.data[p] = param->image.data[p] - 1;
	  if (param->image.data[p + 1] > 0)
	    param->image.data[p + 1] = param->image.data[p + 1] - 1;
	  if (param->image.data[p + 2] > 0)
	    param->image.data[p + 2] = param->image.data[p + 2] - 1;
	  if (param->image.data[p + 3] > 0)
	    param->image.data[p + 3] = param->image.data[p + 3] - 1;
	  i = i + 1;
	}
    }
  else
    if (DEBUG == 1)
      my_putstr("Pixel out of range. \n");
  return (0);
}
