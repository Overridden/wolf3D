/*
** loading_img.c for wolf3d in /home/nguye_1//afs_loc/projects/igraph/wolf3d-2017-nguye_1
**
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
**
** Started on  Sun Jan 13 14:20:53 2013 alexandre1 nguyen
** Last update Thu Dec 11 17:22:47 2014 Alexandre NGUYEN
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

void	loading2(img_param *param, int x, int y)
{
/*   param->weapon.loading4 = mlx_xpm_file_to_image(param->mlx, "loading4.xpm", */
/* &x, &y); */
/*   mlx_put_image_to_window(param->mlx, param->win, */
/*   			  param->weapon.loading4, 0, 0); */
/*   usleep(TIME_SHORT); */
/*   param->weapon.loading5 = mlx_xpm_file_to_image(param->mlx, "loading5.xpm", */
/* &x, &y); */
/*   mlx_put_image_to_window(param->mlx, param->win, */
/*   			  param->weapon.loading5, 0, 0); */
/*   usleep(TIME_SHORT); */
/*   param->weapon.loading6 = mlx_xpm_file_to_image(param->mlx, "loading6.xpm", */
/* &x, &y); */
/*   mlx_put_image_to_window(param->mlx, param->win, */
/*   			  param->weapon.loading6, 0, 0); */
/*   sleep(2); */
}

void	loading(img_param *param, int x, int y)
{
/*   param->weapon.loading1 = mlx_xpm_file_to_image(param->mlx, "loading1.xpm", */
/* &x, &y); */
/*   mlx_put_image_to_window(param->mlx, param->win, */
/*   			  param->weapon.loading1, 0, 0); */
/*   usleep(TIME); */
/*   param->weapon.loading2 = mlx_xpm_file_to_image(param->mlx, "loading2.xpm", */
/* &x, &y); */
/*   mlx_put_image_to_window(param->mlx, param->win, */
/*   			  param->weapon.loading2, 0, 0); */
  /* param->main = mlx_xpm_file_to_image(param->mlx, "halo_main.xpm", &x, &y); */
/*   param->weapon.loading3 = mlx_xpm_file_to_image(param->mlx, "loading3.xpm", */
/* &x, &y); */
  /* mlx_put_image_to_window(param->mlx, param->win, */
  /* 			  param->weapon.loading3, 0, 0); */
  usleep(TIME_SHORT);
  loading2(param, x, y);
}

int	starting_img(img_param *param)
{
  int	x;
  int	y;

  param->arme = 0;
  param->flame = -1;
  loading(param, x, y);
  /* mlx_put_image_to_window(param->mlx, param->win, */
  /* 			  param->main, 0, 0); */
  param->img = mlx_new_image(param->mlx, param->width, param->height);
  param->weapon.weapon = mlx_xpm_file_to_image(param->mlx, "weapon.xpm", &x,
&y);
  param->weapon.weapon_f = mlx_xpm_file_to_image(param->mlx, "weapon_f.xpm",
&x, &y);
  param->weapon.assault = mlx_xpm_file_to_image(param->mlx, "assault.xpm", &x,
&y);
  param->weapon.assault_f = mlx_xpm_file_to_image(param->mlx, "assault_f.xpm",
&x, &y);
  param->weapon.carabine = mlx_xpm_file_to_image(param->mlx, "carabine.xpm",
&x, &y);
  param->weapon.carabine_f = mlx_xpm_file_to_image(param->mlx,
						   "carabine_f.xpm", &x, &y);
  param->sky = mlx_xpm_file_to_image(param->mlx, "stars.xpm", &x, &y);
  param->weapon.map = mlx_xpm_file_to_image(param->mlx, "map.xpm", &x, &y);
}
