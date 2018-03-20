#include "../includes/bsq.h"

t_uns		ft_after_read(t_coord *xy, t_grid *grid, t_coord **begin)
{
	t_square	*square;
	t_coord		*copy;

	copy = *begin;
	if (grid->char_empty == grid->char_mine ||
		grid->char_empty == grid->char_square ||
		grid->char_mine == grid->char_square)
		return (1);
	if (xy->y - 1 != grid->y)
		return (1);
	grid->x = grid->x - 1;
	printf("FINI, A TOI ROBIN\n");
	square = algo_bsq(&copy, grid);
	grid->x = grid->x + 1;
	display(square, grid, begin);
	printf("\n%d %d %d", square->start->x, square->start->y, square->length);
	return (0);
}