/*
** e_prot.h for event prototypes in /home/noreply/igraph/wolf3d/includes
**
** Made by Tym17
** Login   <noreply@tym17.com>
**
** Started on  Wed Dec  3 09:33:09 2014 Tym17
** Last update Mon Dec 22 09:43:17 2014 Tym17
*/

#ifndef E_PROT_H_
# define E_PROT_H_

int	e_key(int kc, t_system *param);
int	e_move(int kc, t_system *param);
int	e_forward(t_system *param);
int	e_back(t_system *param);
int	e_left(t_system *param);
int	e_right(t_system *param);
int	e_calib(t_system *param);
int	e_help(t_system *param);
int	e_color(t_system *param);
int	e_day(t_system *param);

#endif /* !E_PROT_H_ */
