#include "ft_btree.h"
#include <stdlib.h>

t_btree	btree_create_node(void *item)
{
	t_btree	*b;

	b = (t_btree)malloc(sizeof(t_btree));
	b->item = item;
	b->left = 0;
	b->right = 0;
	return (b);
}