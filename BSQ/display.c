#include "../includes/bsq.h"

void		display(t_square *square, t_grid *grid, t_coord **begin)
{
	t_coord xy;
	t_coord *mine;

	mine = *begin;
	xy.y = 0;
	xy.x = 0;
	while (xy.y < grid->y)
	{
		xy.x = 0;
		mine = display_line(&xy, mine, square, grid);
		write(1, "\n", 1);
		xy.y++;
	}
}