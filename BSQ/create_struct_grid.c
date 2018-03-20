#include "../includes/bsq.h"

t_grid		create_struct_grid(void)
{
	t_grid	grid;

	grid.char_empty = 0;
	grid.char_mine = 0;
	grid.char_square = 0;
	grid.x = 0;
	grid.y = 0;
	return (grid);
}