/*
** show_img.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sat Jan 12 22:49:25 2013 alexandre1 nguyen
** Last update Sun Jan 13 22:10:09 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "list.h"

void	show(img_param *param)
{
  if (param->arme == 0)
    {
      mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
      if (param->flame == 1)
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.assault_f, 180,
				170);
      else
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.assault, 180,
				170);
      mlx_put_image_to_window(param->mlx, param->win, param->weapon.map, 0, 0);
    }
  else
    show_f(param);
}

void	show_f(img_param *param)
{
  if (param->arme == 1)
    {
      mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
      if (param->flame == 1)
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.weapon_f, 180,
				170);
      else
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.weapon, 180,
				170);
      mlx_put_image_to_window(param->mlx, param->win, param->weapon.map, 0, 0);
    }
  else
    show_c(param);
}

void	show_c(img_param *param)
{
  if (param->arme == 2)
    {
      mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
      if (param->flame == 1)
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.carabine_f, 350,
				120);
      else
	mlx_put_image_to_window(param->mlx, param->win, param->weapon.carabine, 300,
				170);
      mlx_put_image_to_window(param->mlx, param->win, param->weapon.map, 0, 0);
    }
}
