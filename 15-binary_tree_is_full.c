#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: pointer to root of the binary tree
 * Return: 0 if FALSE. 1 if TRUE
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;
	int flag = 0;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;

	if (!l && !r)
		return (1);

	if (l && r)
	{
		flag = binary_tree_is_full(l) && binary_tree_is_full(r);
		return (flag);
	}
	return (0);
}
