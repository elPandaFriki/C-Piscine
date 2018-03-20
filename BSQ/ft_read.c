#include "../includes/bsq.h"

t_uns		ft_read(int *fd, char *buffer, t_grid *grid, t_coord *xy)
{
	char		first;
	t_coord		**begin;
	t_coord		*tmp;

	first = 1;
	tmp = 0;
	begin = &tmp;
	while (read(*fd, buffer, 1))
	{
		if (buffer[0] == '\n' && first == 1)
			first = 0;
		else if (first == 1)
		{
			if (first_line(buffer, grid) == 1)
				return (1);
		}
		else
		{
			if (ft_read_char(xy, buffer, grid, begin) == 1)
				return (1);
		}
	}
	return (ft_after_read(xy, grid, begin));
}