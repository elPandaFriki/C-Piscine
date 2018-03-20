#include "../includes/bsq.h"

t_uns		first_line(char *buffer, t_grid *grid)
{
	char swap;

	swap = grid->char_empty;
	if (!((swap >= 48 && swap <= 57) || swap == 0))
		return (1);
	grid->char_empty = grid->char_mine;
	grid->char_mine = grid->char_square;
	grid->char_square = buffer[0];
	if (swap != 0)
		grid->y = (grid->y * 10) + (swap - '0');
	return (0);
}