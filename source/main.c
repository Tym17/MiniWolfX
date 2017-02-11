/*
** main.c for wolf3d_main in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  1 10:01:20 2014 Tym17
** Last update Sun Dec 21 15:43:15 2014 Tym17
*/

#include "inc.h"

int			main(int ac, char **av)
{
  t_system		sys;

  sys.mlx = mlx_init();
  if (sys.mlx == NULL)
    {
      my_putstr("Something went wring with the mlx.\n");
      return (0);
    }
  sys.win = mlx_new_window(sys.mlx, WIN_X, WIN_Y, WIN_TITLE);
  if (sys.win == NULL || sys.mlx == NULL)
    {
      my_putstr("Something went wrong with the mlx.\n");
      return (0);
    }
  sys.image.img = mlx_new_image(sys.mlx, WIN_X, WIN_Y);
  sys.image.data = mlx_get_data_addr(sys.image.img,
				     &(sys.image.bpp),
				     &(sys.image.sizeline),
				     &(sys.image.endian));
  if (sys.image.endian == 1)
    {
      my_putstr("Please consider running this game on a big endian system.\n");
      return (0);
    }
  i_player(&sys);
  mlx_put_image_to_window(sys.mlx, sys.win, sys.image.img, 0, 0);
  w_hook(&sys);
  mlx_loop(sys.mlx);
  return (0);
}
