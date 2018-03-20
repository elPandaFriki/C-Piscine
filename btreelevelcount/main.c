#include "ft_btree.h"
#define MAX(a, b) ((a > b) * a + (a <= b) * b)

int	btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (1 + MAX(btree_level_count(root->left),
					btree_level_count(root->right)));
}