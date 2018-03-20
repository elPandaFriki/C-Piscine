#include "../includes/bsq.h"

t_coord			*create_mine(t_coord *xy)
{
	t_coord *mine;

	mine = (t_coord*)malloc(sizeof(t_coord));
	if (mine)
	{
		mine->x = xy->x - 1;
		mine->y = xy->y - 1;
		mine->next = 0;
	}
	return (mine);
}