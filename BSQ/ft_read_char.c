#include "../includes/bsq.h"

t_uns		ft_read_char(t_coord *xy, char *buffer, t_grid *grid,
							t_coord **begin)
{
	xy->x++;
	if (buffer[0] == grid->char_mine)
		push_back(begin, xy);
	else if (buffer[0] == '\n')
	{
		if (grid->x == 0)
			grid->x = xy->x;
		if (grid->x != xy->x)
			return (1);
		xy->x = 0;
		xy->y++;
	}
	else if (buffer[0] != grid->char_empty)
		return (1);
	return (0);
}