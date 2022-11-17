#include "binary_trees.h"

/**
 * binary_tree_nodes - counts node with at least 1 child in a binary tree
 * @t: pointer to root of the binary tree
 * Return: number of nodes in tree with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *t)
{
	int c = 0;

	if (!t)
		return (0);

	if ((t->left) || (t->right))
		c = 1;

	return (c + binary_tree_nodes(t->left) + binary_tree_nodes(t->right));
}
