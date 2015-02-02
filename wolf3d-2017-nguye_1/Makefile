##
## Makefile for fdf in /home/nguye_1//afs_loc/projects/fdf-2017-nguye_1
## 
## Made by alexandre1 nguyen
## Login   <nguye_1@epitech.net>
## 
## Started on  Sun Dec  9 18:52:17 2012 alexandre1 nguyen
## Last update Thu Dec 11 17:07:24 2014 Alexandre NGUYEN
##

NAME		= wolf3d

SRCS		= main.c \
		drawing.c \
		wall_sky_ground.c \
		failles.c \
		show_img.c \
		gere_key.c \
		keys.c \
		calculs.c \
		mapping.c \
		loading_img.c

OBJS		= $(SRCS:.c=.o)

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		cc $(OBJS) -o $(NAME) -lmlx -lmlx_x86_64 -L./minilibx -I./minilibx -L./usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11 -lm

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
