##
## Makefile for wolf3d in /home/noreply/igraph/wolf3d
## 
## Made by Tym17
## Login   <noreply@tym17.com>
## 
## Started on  Mon Dec  1 09:54:42 2014 Tym17
## Last update Mon Dec 22 09:42:58 2014 Tym17
##

LIB = \
	-L/usr/lib64 \
	-lmlx \
	-lXext \
	-lX11 \
	-lm

SRC = \
	main.c \
	my_putchar.c \
	my_putstr.c \
	my_putnbr.c \
	w_refresh.c \
	d_bkg.c \
	create_color.c \
	d_sky.c \
	d_main.c \
	p_put.c \
	e_key.c \
	w_hook.c \
	w_kill.c \
	e_forward.c \
	e_back.c \
	e_left.c \
	e_right.c \
	d_line.c \
	darken_color.c \
	i_player.c \
	i_view.c \
	m_getdist.c \
	e_move.c \
	i_map.c \
	d_dark.c \
	m_view.c \
	e_calib.c \
	m_color.c \
	e_help.c \
	e_color.c \
	e_day.c

OBJ = \
	$(SRC:.c=.o)

CC = \
	cc

RM = \
	rm -f

NAME = \
	wolf3d

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LIB)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tmp:
	$(RM) *~

tclean:	tmp	clean

.PHONY:	all clean fclean re
