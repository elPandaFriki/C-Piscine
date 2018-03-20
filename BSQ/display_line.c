#include "../includes/bsq.h"

t_coord		*display_line(t_coord *xy, t_coord *mine, t_square *square,
				t_grid *grid)
{
	t_coord *tmp;

	while (xy->x < grid->x - 1)
	{
		if (mine && mine->x == xy->x && mine->y == xy->y)
		{
			write(1, &grid->char_mine, 1);
			if (mine->next)
			{
				tmp = mine;
				mine = mine->next;
				free(tmp);
			}
		}
		else if (square->start->x <= xy->x &&
				square->length + square->start->x > xy->x &&
				square->start->y <= xy->y &&
				square->length + square->start->y > xy->y)
			write(1, &grid->char_square, 1);
		else
			write(1, &grid->char_empty, 1);
		xy->x++;
	}
	return (mine);
}