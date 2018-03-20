#include "ft_btree.h"

void	btree_apply_sufix(t_btree *root, void (*applyf)(void*))
{
	if (root == 0)
		return ;
	btree_apply_sufix(root->left, applyf);
	btree_apply_sufix(root->right, applyf);
	applyf(root->item);
}