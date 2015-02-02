/*
** list.h for wolf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Dec 17 00:19:30 2012 alexandre1 nguyen
** Last update Wed Jan  9 18:09:02 2013 alexandre1 nguyen
*/

#ifndef LIST_H_
# define LIST_H_

#define A (M_PI/2) * -1
#define RAD(x) ((x) * (M_PI) / (180))
#define WALL (param->height / (2 * wallcheck(param)))

typedef struct	s_position
{
  double	x;
  double	y;
  double	a;
  int		**map;
}		pos;

typedef struct	s_w_map
{
  int	**lab;
}		w_map;

typedef struct	s_img_param
{
  void	*mlx;
  void	*win;
  void	*img;
  float	x0;
  float	y0;
  float	x1;
  float	y1;
  float	v1;
  float	v2;
  float	a;
  float	a2;
  float	p;
  float	d;
  int  	color;
  float	width;
  float	height;
  float	m_width;
  float	m_height;
  pos	*pos;
  w_map	*wall;
}		img_param;

void	mario(img_param *param);

#endif /* LIST_H_ */
