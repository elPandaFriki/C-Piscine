#include "../includes/bsq.h"

t_square		*square_init(void)
{
	t_square	*square;
	t_coord		*start;

	start = (t_coord*)malloc(sizeof(t_coord));
	square = (t_square*)malloc(sizeof(t_square));
	start->x = 0;
	start->y = 0;
	start->next = 0;
	square->length = 0;
	square->start = start;
	return (square);
}