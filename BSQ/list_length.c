#include "../includes/bsq.h"

t_uns			list_length(t_coord **begin)
{
	t_coord		*list;
	t_uns		i;

	list = *begin;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}