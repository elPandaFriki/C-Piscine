#include "../includes/bsq.h"

t_uns	read_stdin(void)
{
	int		fd;

	fd = 0;
	if (prepare_read(&fd))
		return (1);
	return (0);
}