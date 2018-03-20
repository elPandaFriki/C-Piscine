#include "../includes/bsq.h"

void			push_back(t_coord **begin, t_coord *xy)
{
	t_coord *mine;
	t_coord *tmp;

	if (*begin == 0)
	{
		*begin = create_mine(xy);
		xy->next = *begin;
	}
	else
	{
		tmp = xy->next;
		mine = create_mine(xy);
		while (tmp->next != 0)
			tmp = tmp->next;
		xy->next = mine;
		tmp->next = mine;
	}
}