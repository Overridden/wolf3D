/*
** main.c for worlf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
**
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
**
** Started on  Fri Dec 14 15:43:17 2012 alexandre1 nguyen
** Last update Wed Dec 17 11:06:07 2014 Alexandre NGUYEN
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int	main(int ac, char **av)
{
  int	fd;
  char	*buf;

  buf = malloc(5000);
  fd = open(av[1], O_RDONLY);
  read(fd, buf, 5000);
  starting(buf);
  free(buf);
}

int	starting(char *buf)
{
  img_param	*param;

  if ((param = malloc(sizeof(*param))) == NULL)
    return (0);
  param->width = 1200;
  param->height = 800;
  if ((param->mlx = mlx_init()) == NULL)
    return (-1);
  param->win = mlx_new_window(param->mlx,
			      param->width,
			      param->height, "Out");

  position(param);
  mapping(param);
  starting_img(param);
  mlx_hook(param->win, 2, 1, &gere_key, param);
  mlx_do_key_autorepeaton(param->mlx);
  mlx_expose_hook(param->win, &drawing, param);
  mlx_loop(param->mlx);
  free(param);
}
