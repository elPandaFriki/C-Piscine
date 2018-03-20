#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *a;
	t_list *b;

	i = 2;
	if (ac == 1)
		return (0);
	a = ft_create_elem(av[1]);
	a->next = 0;
	while (i < ac)
	{
		b = a;
		a = ft_create_elem(av[i]);
		a->next = b;
		i++;
	}
	return (a);
}