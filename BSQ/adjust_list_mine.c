#include "../includes/bsq.h"

void				adjust_list_mine(t_uns *y, t_coord **list)
{
	while (((*list) && (*list)->y < *y))
		(*list) = (*list)->next;
}