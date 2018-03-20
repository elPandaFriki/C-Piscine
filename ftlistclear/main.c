#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*a;
	t_list	*b;

	a = *begin_list;
	while (a)
	{
		b = a;
		a = a->next;
		free(b);
	}
	*begin_list = 0;
}