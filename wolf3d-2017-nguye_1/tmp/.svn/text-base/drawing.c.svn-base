/*
** drawing.c<2> for wolf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Dec 17 00:17:49 2012 alexandre1 nguyen
** Last update Mon Dec 17 16:13:54 2012 alexandre1 nguyen
*/

#include <stdio.h>
#include <mlx.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"

int	my_pixel_put_to_image(img_param *param, void *img,
			      int x, int y)
{
  int	bpp;
  int	size_line;
  int	endian;
  unsigned int color_dec;
  char	*data;
  int	t;
  int	r;
  int	g;
  int	b;

  color_dec = mlx_get_color_value(param->mlx, param->color);
  r = (color_dec / 256 / 256 / 256) % 256;
  g = (color_dec / 256 / 256) % 256;
  b = (color_dec / 256) % 256;
  t = (color_dec / 256 / 256 / 256 / 256) % 256;
  data = mlx_get_data_addr(img, &bpp, &size_line, &endian);
  data[((size_line * y) + (x * bpp / 8)) + 3] = t;
  data[((size_line * y) + (x * bpp / 8)) + 2] = r;
  data[((size_line * y) + (x * bpp / 8)) + 1] = g;
  data[((size_line * y) + (x * bpp / 8))] = b;
  return (0);
}
