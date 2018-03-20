#include "../includes/bsq.h"

t_uns		prepare_read(int *fd)
{
	char	buffer[0];
	t_grid	grid;
	t_coord	xy;

	xy.x = 0;
	xy.y = 1;
	grid = create_struct_grid();
	if (ft_read(fd, buffer, &grid, &xy) == 1)
		return (1);
	return (0);
}