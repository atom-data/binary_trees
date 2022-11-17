#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is the root
 * @node: binary tree node to check
 * Return: 1 if TRUE. 0 if FALSE
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
