/*
** main.c for worlf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Dec 14 15:43:17 2012 alexandre1 nguyen
** Last update Wed Jan  9 19:59:58 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"

int	gere_key(int, img_param *);
int	position(img_param *);
int	drawing(img_param *);
int	starting_img(img_param*);
int	starting(char*);

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

  my_printf("%s\n", buf);
  if ((param = malloc(sizeof(*param))) == NULL)
    return (0);
  param->width = 800;
  param->height = 800;
  param->m_width = 600;
  param->m_height = 600;
  param->mlx = mlx_init();
  param->win = mlx_new_window(param->mlx,
			      param->width,
			      param->height, "Out");

  position(param);
  mapping(param);
  mlx_hook(param->win, 2, 1, &gere_key, param);
  mlx_do_key_autorepeaton(param->mlx);
  mlx_expose_hook(param->win, &drawing, param);
  mlx_loop(param->mlx);
  free(param);
}

int	starting_img(img_param *param)
{
  param->color = 0x99999900;
  param->img = mlx_new_image(param->mlx, param->width, param->height);
}

int	mapping2(img_param *param)
{
  int	i;
  int	j;

  param->wall->lab[1][1] = 0;
  param->wall->lab[1][3] = 0;
  param->wall->lab[1][4] = 0;
  param->wall->lab[2][1] = 0;
  param->wall->lab[2][2] = 0;
  param->wall->lab[2][3] = 0;
  param->wall->lab[3][2] = 0;
  param->wall->lab[3][4] = 0;
  param->wall->lab[4][1] = 0;
  param->wall->lab[4][2] = 0;
  param->wall->lab[4][3] = 0;
  param->wall->lab[4][4] = 0;
  j = 0;
  while (j != 6)
    {
      i = 0;
      while (i != 6)
	{
	  my_printf("%d ", param->wall->lab[j][i]);
	  i += 1;
	}
      j += 1;
      my_printf("\n");
    }
}

int	mapping(img_param *param)
{
  int	i;
  int	j;

  j = 0;
  param->wall = malloc(sizeof(*param->wall));
  param->wall->lab = malloc(6 * 6 * sizeof(int));
  while (j != 6)
    {
      param->wall->lab[j] = malloc(6 * sizeof(int));
      i = 0;
      while (i != 6)
	{
	  param->wall->lab[j][i] = 1;
	  my_printf("(%d, %d) = %d\n", i, j, param->wall->lab[j][i]);
	  i += 1;
	}
      my_printf("\n");
      j += 1;
    }
  mapping2(param);
}

int	gere_key(int keycode, img_param *param)
{
  if (keycode == 65307 || keycode == 65421)
    exit(0);
  else if (keycode == 122 || keycode == 65362)
    {
      param->y0 -= .1;
      drawing(param);
    }
  else if (keycode == 113 || keycode == 65361)
    {
      param->a2 += 5;
      drawing(param);
    }
  else if (keycode == 115 || keycode == 65364)
    {
      param->y0 += .1;
      drawing(param);
    }
  else if (keycode == 100 || keycode == 65363)
    {
      param->a2 -= 5;
      drawing(param);
    }
}

int	position(img_param *param)
{
  param->x0 = 2.5;
  param->y0 = 4.5;
  param->a2 = 9000;
}

float	wallcheck(img_param *param)
{
  float	x;
  float	y;
  float	l;

  l = 0;
  x = param->x0 + l * param->v1;
  y = param->y0 + l * param->v2;
  while (param->wall->lab[(int)y][(int)x] < 1)
    {
      l += .1;
      x = param->x0 + l * param->v1;
      y = param->y0 + l * param->v2;
    }
  return (l);
}

int	calculs(img_param *param)
{
  param->p = 1;
  param->d = param->p / 2;
  param->x1 = 1;
  param->y1 = 0;
  param->x1 = param->x1 * cos(RAD(param->a/100)) - param->y1 * sin(RAD(param->a/100));
  param->y1 = (param->p * sin(RAD(param->a/100))) + (param->y1 * cos(RAD(param->a/100)));
  param->x1 = param->x1 + param->x0;
  param->y1 = param->y1 + param->y0;
  param->v1 = param->x1 - param->x0;
  param->v2 = -param->y1 + param->y0;
}

int	drawing(img_param *param)
{
  int	a;
  int	i;
  int	j;
  int	x;

  free(param->img);
  starting_img(param);
  param->a = param->a2;
  calculs(param);
  param->a += 4000;
  x = 0;
  while (x < 800)
    {
      i = 0;
      while (i != (int)WALL)
	{
	  my_pixel_put_to_image(param, param->img, x, (int)((param->height - WALL) / 2) + i);
	  printf("%d ",  (int)((param->height - WALL) / 2) + i);
	  i += 1;
	}
      param->a -= 10;
      x += 1;
      calculs(param);
    }
  param->a -= 40;
  mlx_put_image_to_window(param->mlx, param->win,
			  param->img, 0, 0);
}
