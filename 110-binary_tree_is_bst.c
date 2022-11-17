#include "binary_trees.h"

/**
 * isBST - Checks if tree is a Binary Search Tree
 * @t: root of tree
 * @min: minimum range of data
 * @max: maximum range of data
 * Return: 1 if TRUE. 0 if FALSE
 */
int isBST(const binary_tree_t *t, int min, int max)
{
	if (!t)
		return (1);

	if ((t->n < min) || (t->n > max))
		return (0);
	if ((t->n == min) || (t->n == max))
		return (0);
	return (isBST(t->left, min, t->n) && isBST(t->right, t->n, max));
}

/**
 * binary_tree_is_bst - Wrapper fn to check if tree is a Binary Search Tree
 * @tree: root of tree
 * Return: 1 if TRUE. 0 if FALSE
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (isBST(tree, -2147483648, 2147483647));
}
