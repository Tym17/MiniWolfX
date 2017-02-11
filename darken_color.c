/*
** darken_color.c for darken_color in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  8 11:16:40 2014 Tym17
** Last update Mon Dec  8 11:27:42 2014 Tym17
*/

#include "inc.h"

int			darken_color(t_color *color, int len)
{
  while (len < WIN_Y)
    {
      if (len % SHADOW_RATE == 0)
	{
	  if (color->r > 0)
	    color->r = color->r - 1;
	  if (color->g > 0)
	    color->g = color->g - 1;
	  if (color->b > 0)
	    color->b = color->b - 1;
	}
      len = len + 1;
    }
  return (0);
}
