/*
** gere_key.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sat Jan 12 23:16:23 2013 alexandre1 nguyen
** Last update Sun Jan 13 04:18:37 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int     gere_key(int keycode, img_param *param)
{
  if (keycode == 65307 || keycode == 65421)
    exit(0);
  else if (keycode == 122 || keycode == 65362)
    forward(param);
  else if (keycode == 113 || keycode == 65361)
    r_left(param);
  else if (keycode == 115 || keycode == 65364)
    rearward(param);
  else if (keycode == 100 || keycode == 65363)
    r_right(param);
  else if (keycode == 65293)
    {
      param->flame *= -1;
      show(param);
    }
  else if (keycode == 65289)
    {
      param->arme = (param->arme + 1) % 3;
      show(param);
    }
}
