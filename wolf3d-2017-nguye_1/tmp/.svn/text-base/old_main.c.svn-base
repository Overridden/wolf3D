/*
** main.c for worlf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Dec 14 15:43:17 2012 alexandre1 nguyen
** Last update Wed Dec 19 19:37:37 2012 alexandre1 nguyen
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
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
  param = malloc(sizeof(*param));
  param->width = 800;
  param->height = 800;
  param->m_width = 600;
  param->m_height = 600;
  param->mlx = mlx_init();
  param->win = mlx_new_window(param->mlx, 
			      param->width, 
			      param->height, "Out");
  starting_img(param);
  position(param);
  mapping(param);
  //  drawing(param);
  //mlx_key_hook(param->win, gere_key, param);
  mlx_hook(param->win, 2, 1, gere_key, param);
  mlx_do_key_autorepeaton(param->mlx);
  mlx_expose_hook(param->win, drawing, param);
  mlx_loop(param->mlx);
  free(param);
}

int	starting_img(img_param *param)
{
  param->color = 0xFFFFFF00;
  param->img = mlx_new_image(param->mlx, param->width, param->height);
}

int	position(img_param *param)
{
  param->x0 = 2.5 * 10;
  param->y0 = 5.5 * 10;
}

int	mapping2(img_param *param)
{
  param->wall->lab[1][1] = 0;
  param->wall->lab[1][4] = 0;
  param->wall->lab[2][1] = 0;
  param->wall->lab[2][2] = 0;
  param->wall->lab[2][3] = 0;
  param->wall->lab[2][4] = 0;
  param->wall->lab[3][3] = 0;
  param->wall->lab[4][1] = 0;
  param->wall->lab[4][2] = 0;
  param->wall->lab[4][3] = 0;

  int	i;
  int	j;

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

void	c_pixel(img_param *param, int x, int y, int color)
{
  param->color = color;
  my_pixel_put_to_image(param, param->img, x * 5, y * 5);
  my_pixel_put_to_image(param, param->img, x * 5 + 1, y * 5);
  my_pixel_put_to_image(param, param->img, x * 5, y * 5 + 1);
  my_pixel_put_to_image(param, param->img, x * 5 + 1 , y * 5 + 1);
}

void	big_pixel(img_param *param, int x, int y, int color)
{
  param->color = color;
  my_pixel_put_to_image(param, param->img, x, y);
  my_pixel_put_to_image(param, param->img, x + 1, y);
  my_pixel_put_to_image(param, param->img, x, y + 1);
  my_pixel_put_to_image(param, param->img, x + 1 , y + 1);
}

int	drawing(img_param *param)
{
  free(param->img);
  param->img = mlx_new_image(param->mlx, param->width, param->height); 
  map(param);
  param->color = 0x114A7C00;
  map_grid(param);
  param->color = 0xFF000000;
  my_printf("x0:%d - y0:%d\n", param->x0 * 100, param->y0 * 100);
  c_pixel(param, param->x0, param->y0, 0x0000FF00);
  //mario(param);
  mlx_put_image_to_window(param->mlx, param->win, 
			  param->img, 0, 0);
}

void	reset(img_param *param)
{
  param->color = 0xFFFFFF00;
  param->x0 = 2.5 * 10;
  param->y0 = 5.5 * 10;
  param->x1 = 0;
  param->y1 = 0;
  free(param->img);
  param->img = mlx_new_image(param->mlx, param->width, param->height);
  drawing(param);
}

int	gere_key(int keycode, img_param *param)
{
  my_printf("%d\n", keycode);
  if (keycode == 65307 || keycode == 65421)
    exit(0);
  else if (keycode == 122 || keycode == 65362)
    {
      param->y0 -= 1;
      drawing(param);
    }
  else if (keycode == 113 || keycode == 65361)
    {
      param->x0 -= 1;
      drawing(param);
    }
  else if (keycode == 115 || keycode == 65364)
    {
      param->y0 += 1;
      drawing(param);
    }
  else if (keycode == 100 || keycode == 65363)
    {
      param->x0 += 1;
      drawing(param);
    }
  else if (keycode == 114)
    reset(param);
}

int	map(img_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  param->color = 0x6C7F7F00;
  while (j != param->m_height / 2)
    {
      while (i != param->m_width / 2)
	{
	  my_pixel_put_to_image(param, param->img, i + 50, 50 + j);
	  i += 1;
	}
      i = 0;
      j += 1;
    }
}

int	map_grid(img_param *param)
{
  int	i;
  int	j;

  j = 0;
  while (j <= 6 * param->m_width / 2 / 6)
    {
      i = 0;
      while (i != param->m_width / 2)
	{
	  my_pixel_put_to_image(param, param->img, i + 50, 50 + j);
	  i += 1;
	}
      j += param->m_width / 2 / 6;
    }
  j = 0;
  while (j <= 6 * param->m_height / 2 / 6)
    {
      while (i != param->m_height / 2)
	{
	  my_pixel_put_to_image(param, param->img, 50 + j, 50 + i);
	  i += 1;
	}
      i = 0;
      j += param->m_height / 2 / 6;
    }
}
