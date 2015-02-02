/*
** mapping.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Jan 13 13:39:02 2013 alexandre1 nguyen
** Last update Sun Jan 13 17:15:39 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int	mapping3(img_param *param)
{
  param->wall->lab[5][7] = 0;
  param->wall->lab[6][1] = 0;
  param->wall->lab[6][3] = 0;
  param->wall->lab[6][5] = 0;
  param->wall->lab[7][1] = 0;
  param->wall->lab[7][2] = 0;
  param->wall->lab[7][3] = 0;
  param->wall->lab[7][5] = 0;
  param->wall->lab[7][6] = 0;
  param->wall->lab[7][7] = 0;
}

int	mapping2(img_param *param)
{
  param->wall->lab[1][1] = 0;
  param->wall->lab[1][2] = 0;
  param->wall->lab[1][3] = 0;
  param->wall->lab[1][5] = 0;
  param->wall->lab[1][6] = 0;
  param->wall->lab[1][7] = 0;
  param->wall->lab[2][1] = 0;
  param->wall->lab[2][3] = 0;
  param->wall->lab[2][4] = 0;
  param->wall->lab[2][5] = 0;
  param->wall->lab[2][7] = 0;
  param->wall->lab[3][1] = 0;
  param->wall->lab[3][5] = 0;
  param->wall->lab[3][7] = 0;
  param->wall->lab[4][1] = 0;
  param->wall->lab[4][2] = 0;
  param->wall->lab[4][3] = 0;
  param->wall->lab[4][5] = 0;
  param->wall->lab[4][7] = 0;
  param->wall->lab[5][1] = 0;
  param->wall->lab[5][3] = 0;
  param->wall->lab[5][4] = 0;
  param->wall->lab[5][5] = 0;
  mapping3(param);
}

int	mapping(img_param *param)
{
  int	i;
  int	j;

  j = 0;
  param->wall = malloc(sizeof(*param->wall));
  param->wall->lab = malloc(9 * 9 * sizeof(int));
  while (j != 9)
    {
      param->wall->lab[j] = malloc(9 * sizeof(int));
      i = 0;
      while (i != 9)
	{
	  param->wall->lab[j][i] = 1;
	  i += 1;
	}
      j += 1;
    }
  mapping2(param);
}
