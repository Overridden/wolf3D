/*
** keys.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sat Jan 12 22:52:38 2013 alexandre1 nguyen
** Last update Sun Jan 13 19:59:36 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int	forward(img_param *param)
{
  calculs(param);
  param->coord.x0 = param->coord.x0 + 0.05 * param->coord.v1;
  param->coord.y0 = param->coord.y0 + 0.05 * param->coord.v2;
  if (param->wall->lab[(int)param->coord.y0][(int)param->coord.x0] == 1)
    {
      param->coord.x0 = param->coord.x0 - 0.05 * param->coord.v1;
      param->coord.y0 = param->coord.y0 - 0.05 * param->coord.v2;
      return (0);
    }
  drawing(param);
}

int	rearward(img_param *param)
{
  calculs(param);
  param->coord.x0 = param->coord.x0 - 0.05 * param->coord.v1;
  param->coord.y0 = param->coord.y0 - 0.05 * param->coord.v2;
  if (param->wall->lab[(int)param->coord.y0][(int)param->coord.x0] == 1)
    {
      param->coord.x0 = param->coord.x0 + 0.05 * param->coord.v1;
      param->coord.y0 = param->coord.y0 + 0.05 * param->coord.v2;
      return (0);
    }
  drawing(param);
}

int	r_left(img_param *param)
{
  param->coord.a2 += 3;
  drawing(param);
}

int	r_right(img_param *param)
{
  param->coord.a2 -= 3;
  drawing(param);
}
