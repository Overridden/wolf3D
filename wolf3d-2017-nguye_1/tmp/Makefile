##
## Makefile for fdf in /home/nguye_1//afs_loc/projects/fdf-2017-nguye_1
## 
## Made by alexandre1 nguyen
## Login   <nguye_1@epitech.net>
## 
## Started on  Sun Dec  9 18:52:17 2012 alexandre1 nguyen
## Last update Tue Apr 30 14:43:22 2013 alexandre1 nguyen
##

NAME		= wolf3d

SRCS		= main_ok1.c \
		drawing.c

OBJS		= $(SRCS:.c=.o)

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		cc $(OBJS) -o $(NAME) -lmlx  -lXext -lX11 -lmy -L../. -lm

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
