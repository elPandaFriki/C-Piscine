#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while (a[i])
	{
		if (a[i] != b[i])
			return (1);
		i++;
	}
	return (0);
}

int		do_op(int nb1, char *op, int nb2)
{
	if (ft_strcmp(op, "+") == 0)
		return (nb1 + nb2);
	if (ft_strcmp(op, "-") == 0)
		return (nb1 - nb2);
	if (ft_strcmp(op, "/") == 0)
		return (nb1 / nb2);
	if (ft_strcmp(op, "*") == 0)
		return (nb1 * nb2);
	if (ft_strcmp(op, "%") == 0)
		return (nb1 % nb2);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc == 1)
	{
		printf("\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i", do_op(a, argv[2], b));
	return (0);
}