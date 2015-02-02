/*
** drawing.c<2> for wolf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
**
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
**
** Started on  Mon Dec 17 00:17:49 2012 alexandre1 nguyen
** Last update Thu Dec 18 17:56:08 2014 Alexandre NGUYEN
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
  char	*data;
  char	*color_;

  param->color = mlx_get_color_value(param->mlx, param->color) ;
  color_ = (char *)&param->color;
  data = mlx_get_data_addr(img, &bpp, &size_line, &endian);
  data[((size_line * y) + (x * bpp / 8)) + 2] = color_[0];
  data[((size_line * y) + (x * bpp / 8)) + 1] = color_[1];
  data[((size_line * y) + (x * bpp / 8))] = color_[2];
  return (0);
}

int	my_ppti_from_xpm(img_param *param, void *text,
			      int x, int y)
{
  int	bpp;
  int	size_line;
  int	endian;
  int	bppt;
  int	size_linet;
  int	endiant;
  char	*d_text;
  char	*data;

  data = mlx_get_data_addr(param->img, &bpp, &size_line, &endian);
  d_text = mlx_get_data_addr(text, &bppt, &size_linet, &endiant);
  data[((size_line * y) + (x * bpp / 8)) + 3] = d_text[((size_linet * y) + (x * bppt / 8)) + 3];
  data[((size_line * y) + (x * bpp / 8)) + 2] = d_text[((size_linet * y) + (x * bppt / 8)) + 2];
  data[((size_line * y) + (x * bpp / 8)) + 1] = d_text[((size_linet * y) + (x * bppt / 8)) + 1];
  data[((size_line * y) + (x * bpp / 8))] = d_text[((size_linet * y) + (x * bppt / 8))];
  return (0);
}

int     drawing(img_param *param)
{
  int   a;
  int   j;
  int   x;
  int   wall_;

  param->coord.a = param->coord.a2;
  param->coord.a += 40;
  x = 0;
  while (x < 1200)
    {
      calculs(param);
      wall_ = (int)WALL;
      sky(param, x);
      ground(param, x);
      wall(param, x, wall_);
      param->coord.a -= .075;
      x += 1;
      param->coord.x = x;
    }
  restore(param);
  show(param);
}
