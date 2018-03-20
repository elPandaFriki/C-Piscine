#include "../includes/bsq.h"

short				check_bomb(t_uns *x, t_uns *y, t_uns length, t_coord **list)
{
	t_coord		*mine;
	short		result;

	result = -1;
	mine = *list;
	while (mine && mine->y < (*y + length ))
	{
		if ((mine->x >= *x && mine->x < (*x + length))
		&& (mine->y >= *y ) && (mine->y < (*y + length)))
			result = (mine->x);
		mine = mine->next;
	}
	return (result);
}