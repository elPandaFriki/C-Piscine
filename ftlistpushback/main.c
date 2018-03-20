#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*a;

	if (*begin_list)
	{
		a = *begin_list;
		while (a->next)
			a = a->next;
		a->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}