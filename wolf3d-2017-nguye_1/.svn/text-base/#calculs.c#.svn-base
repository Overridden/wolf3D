/*
** calculs.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sat Jan 12 23:13:15 2013 alexandre1 nguyen
** Last update Sun Jan 13 17:15:06 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int     position(img_param *param)
{
  param->coord.x0 = 1.5;
  param->coord.y0 = 7.5;
  param->coord.a2 = 95;
  param->coord.p = 1;
  param->coord.d = .5;
  param->coord.x1 = 1;
  param->coord.y1 = 0;
}

float   wallcheck(img_param *param)
{
  int   x;
  int   y;
  float l;

  l = 0;
  x = param->coord.x0 + l * param->coord.v1;
  y = param->coord.y0 + l * param->coord.v2;
  while (param->wall->lab[(int)y][(int)x] < 1)
    {
      l += .003;
      x = param->coord.x0 + l * param->coord.v1;
      y = param->coord.y0 + l * param->coord.v2;
    }
  param->coord.g_x = x;
  param->coord.g_y = y;
  return (l);
}

int     calculs(img_param *param)
{
  param->coord.x2 = (param->coord.x1 * cos(RAD(param->coord.a))) -
    (param->coord.y1 * sin(RAD(param->coord.a)));
  param->coord.y2 = (param->coord.p * sin(RAD(param->coord.a))) +
    (param->coord.y1 * cos(RAD(param->coord.a)));
  param->coord.x2 = param->coord.x2 + param->coord.x0;
  param->coord.y2 = param->coord.y2 + param->coord.y0;
  param->coord.v1 = param->coord.x2  - param->coord.x0;
  param->coord.v2 = -param->coord.y2 + param->coord.y0;
}
