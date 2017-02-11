/*
** d_prot.h for draw prototypes in /home/noreply/igraph/wolf3d/includes
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 09:30:22 2014 Tym17
** Last update Sun Dec 21 15:24:50 2014 Tym17
*/

#ifndef D_PROT_H_
# define D_PROT_H_

int	d_bkg(t_system *param);
int	d_main(t_system *param);
int	d_sky(t_system *param);
int	d_line(t_system *param, int pos, int len);
int	d_dark(t_system *param, int i);

#endif /* !D_PROT_H_ */
