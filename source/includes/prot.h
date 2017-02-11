/*
** prot.h for prototypes in /home/noreply/igraph/wolf3d
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 09:19:24 2014 Tym17
** Last update Thu Dec 18 15:34:26 2014 Tym17
*/

#ifndef PROT_H_
# define PROT_H_

int	main(int ac, char **av);
int	create_color(int clr, t_color *color);
int     darken_color(t_color *color, int len);
int	v_pos(int px, int py, int j, int dec);

# include "my.h"
# include "w_prot.h"
# include "d_prot.h"
# include "e_prot.h"
# include "p_prot.h"
# include "i_prot.h"
# include "m_prot.h"
#endif /* !PROT_H_ */
