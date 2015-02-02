/*
** my_put_str_in_tab.c for lib in /home/nguye_1//afs_loc/projects/tmp/woldf3d
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Dec 17 00:50:53 2012 alexandre1 nguyen
** Last update Mon Dec 17 15:30:36 2012 alexandre1 nguyen
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	*counting_for_malloc(char *path)
{
  int	x;
  int	y;
  int	fd;
  int	*tab;
  char	*buf;

  buf = malloc(2 * sizeof(char));
  fd = open(path, O_RDONLY);
  x = 0;
  y = 0;
  tab = malloc(3 * sizeof(int));
  while (read(fd, buf, 2) > 0)
    {
      if (buf[1] == '\n')
	{
	  y += 1;
	  x = 0;
	}
      else if (buf[1] != '\n' && buf[1])
	x += 1;
      tab[0] = x;
      tab[1] = y;
    }
  return (tab);
}

int	**malloc_my_put_str_in_tab(int **map, char *path)
{
  int	*counter;
  int	i;

  i = 0;  
  counter = counting_for_malloc(path);
  my_printf("\n%d - %d", counter[0], counter[1]);
  map = malloc((counter[1] + 1) * counter[0] * sizeof(int));
  while (i <= counter[1])
    {
      map[i] = malloc((counter[0] + 1) * sizeof(int));
      i += 1;
    }
  return (map);
  free(map);
}

int	**my_put_str_in_tab(char *path)
{
  int	fd;
  int	x;
  int	y;
  int	i;
  int	**map;
  int	*counter;
  char	*buf;

  x, y, i = 0;
  buf = malloc(3 * sizeof(char));
  fd = open(path, O_RDONLY);
  counter = counting_for_malloc(path);
  /* map = malloc_my_put_str_in_tab(map, path); */
  map = malloc((counter[1] + 1) * counter[0] * sizeof(int));
  while (i <= counter[1])
    {
      map[i] = malloc((counter[0] + 1) * sizeof(int));
      i += 1;
    }
  while (read(fd, buf, 2) > 0)
    {
      my_printf("- FUCK -%s-", buf);
      if (buf[1] == '\n')
	{
	  map[x][y] = my_getnbr(buf[0]);
	  my_printf("\n%d ", map[x][y]);
	  y += 1;
	  x = 0;
	}
      else if (buf[1] != '\n' && buf[1])
	{
	  my_printf("- FUCK. - %d ", map[x][y]);
	  map[x][y] = my_getnbr(buf[0]);
	  my_printf("- FUCK.. -");
	  my_printf("%d ", map[x][y]);
	  x += 1;
	}
    }

  return (map);
}

void	main(int ac, char **av)
{
  my_put_str_in_tab(av[1]);
}
