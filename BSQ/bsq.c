#include "../includes/bsq.h"

void	bsq(int *argc, char **argv)
{
	t_uns	 i;

	i = 0;
	if (*argc > 1)
		while (++i < *argc)
		{
			if (read_file(argv[i]) == 1)
				write(1, "map error\n", 10);
		}
	else
		read_stdin();
}