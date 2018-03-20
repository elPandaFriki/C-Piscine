#include "../includes/bsq.h"

t_square		*algo_bsq(t_coord **list, t_grid *grid)
{
	t_uns			currentx;
	t_uns			currenty;
	t_square		*max;
	t_square		*temp;
	short			opti;

	temp = square_init();
	max = square_init();
	currenty = 0;
	while (currenty < (grid->y - max->length))
	{
		currentx = 0;
		while (currentx < (grid->x - max->length))
		{
			adjust_list_mine(&currenty, list);
			temp->start->x = currentx;
			temp->start->y = currenty;
			temp->length = max->length + 1;
			opti = check_bomb(&currentx, &currenty, temp->length, list);
			while (temp->length <= (grid->x - currentx)
					&& temp->length <= (grid->y - currenty)
					&& (opti == -1))		
			{
				max->start->x = temp->start->x;
				max->start->y = temp->start->y;
				max->length = temp->length;
				temp->length++;
				opti = check_bomb(&currentx, &currenty, temp->length, list);
			}
			if (opti != -1 && opti > currentx)
				currentx = opti;
			currentx++;
		}
		currenty++;
	}
	free(temp->start);
	free(temp);
	return (max);
}