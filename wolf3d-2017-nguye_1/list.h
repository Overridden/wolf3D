/*
** list.h for wolf in /home/nguye_1//afs_loc/projects/tmp/woldf3d
**
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
**
** Started on  Mon Dec 17 00:19:30 2012 alexandre1 nguyen
** Last update Thu Dec 11 18:46:56 2014 Alexandre NGUYEN
*/

#ifndef LIST_H_
# define LIST_H_

#define A (M_PI/2) * -1
#define RAD(x) ((x) * 0.0174532925)
#define CAR(x) x*x
#define WALL (param->height / (2 * wallcheck(param)))
#define TIME 400000
#define TIME_SHORT 400000

typedef struct	s_coord
{
  float	x0;
  float	y0;
  float	x1;
  float	y1;
  float	x2;
  float	y2;
  float	v1;
  float	v2;
  float	a;
  float	a2;
  float	p;
  float	d;
  int	x;
  int	g_x;
  int	g_y;
}		coord;

typedef struct	s_w_map
{
  int	**lab;
}		w_map;

typedef struct	s_img
{
  void	*weapon;
  void	*weapon_f;
  void	*assault;
  void	*assault_f;
  void	*carabine;
  void	*carabine_f;
  void	*loading1;
  void	*loading2;
  void	*loading3;
  void	*loading4;
  void	*loading5;
  void	*loading6;
  void	*map;
}		img_param2;

typedef struct	s_img_param
{
  void	*mlx;
  void	*win;
  void	*img;
  void	*sky;
  void	*main;
  int	flame;
  int	arme;
  int  	color;
  int	width;
  int	height;
  float	m_width;
  float	m_height;
  w_map	*wall;
  coord coord;
  img_param2	weapon;
}		img_param;

int	forward(img_param *);
int	rearward(img_param *);
int	r_left(img_param *);
int	r_rights(img_param *);
float   wallcheck(img_param *);
int     gere_key(int, img_param *);
int     position(img_param *);
float   wallcheck(img_param *);
int     calculs(img_param *);
int     drawing(img_param *);
void	loading2(img_param *, int, int);
void	loading(img_param *, int, int);
int     starting_img(img_param*);
int	mapping(img_param *);
int	mapping2(img_param *);
int	mapping3(img_param *);
int     starting(char*);
void	check(img_param *);
void	sky(img_param *, int);
void	ground(img_param *, int);
void	wall(img_param *, int, int);
void	restore(img_param *);
void	show(img_param *);
void	show_f(img_param *);
void	show_c(img_param *);

#endif /* LIST_H_ */
