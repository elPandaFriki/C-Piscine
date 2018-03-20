#ifndef __BSQ_H
# define __BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdio.h>

typedef unsigned short	t_uns;

typedef struct			s_grid
{
	unsigned short		x;
	unsigned short		y;
	unsigned char		char_empty;
	unsigned char		char_mine;
	unsigned char		char_square;
}						t_grid;

typedef struct			s_square
{
	struct s_coord		*start;
	short				length;
}						t_square;

typedef struct			s_coord
{
	unsigned short		x;
	unsigned short		y;
	struct s_coord		*next;
}						t_coord;

void					adjust_list_mine(t_uns *y, t_coord **list)
t_square			*algo_bsq(t_coord **list, t_grid *grid);
void					bsq(int *argc, char **argv);
short					check_bomb(t_uns *x, t_uns *y, t_uns l,
							t_coord **list);
t_coord				*create_mine(t_coord *xy);
t_grid				create_struct_grid();
void					display(t_square *square, t_grid *grid,
							t_coord **begin);
t_coord				*display_line(t_coord *xy, t_coord *mine, t_square *square,
							t_grid *grid)
t_uns					first_line(char *buffer, t_grid *grid);
t_uns					ft_after_read(t_coord *xy, t_grid *grid,
							t_coord **begin);
t_uns					ft_read(int *fd, char *buffer, t_grid *grid,
							t_coord *xy);
t_uns					ft_read_char(t_coord *xy, char *buffer, t_grid *grid,
							t_coord **begin);
t_uns					prepare_read(int *fd);
void					push_back(t_coord **begin, t_coord *xy);
t_uns					read_file(char *file);
t_uns					read_stdin();
t_square			*square_init();

#endif