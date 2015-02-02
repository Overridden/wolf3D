/*
** failles.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sat Jan 12 22:44:52 2013 alexandre1 nguyen
** Last update Sun Jan 13 03:08:05 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

void	check(img_param *param)
{
  if ((int)param->coord.y0 < 3 && (int)param->coord.x0 < 4)
    param->wall->lab[3][4] = 1;
  else if ((int)param->coord.y0 > 2 && (int)param->coord.x0 == 4)
    param->wall->lab[2][3] = 1;
}

void	restore(img_param *param)
{
  /* param->wall->lab[3][4] = 0; */
  /* param->wall->lab[2][3] = 0; */
  param->coord.a += 43;
}
