/*
** my_structs.h for my_structs in /home/noreply/igraph/wolf3d/includes
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Mon Dec  1 10:06:00 2014 Tym17
** Last update Mon Dec 22 09:39:47 2014 Tym17
*/

#ifndef MY_STRUCT_H_
# define MY_STRUCT_H_

typedef struct	s_color
{
  int		r;
  int		g;
  int		b;
  int		a;
}		t_color;

typedef struct	s_vector
{
  double	x;
  double	y;
}		t_vector;

typedef struct	s_player
{
  double	x;
  double	y;
  int		mapid;
  int		*map;
  int		maplen;
  double	w;
  t_vector	dir;
}		t_player;

typedef struct	s_image
{
  void		*img;
  char		*data;
  int		bpp;
  int		sizeline;
  int		endian;
}		t_image;

typedef struct	s_system
{
  void		*mlx;
  void		*win;
  t_image	image;
  t_player	player;
  t_vector	view;
  int		wall_color;
  int		sky_color;
  int		iscolored;
}		t_system;

#endif /* !MY_STRUCT_H_ */
