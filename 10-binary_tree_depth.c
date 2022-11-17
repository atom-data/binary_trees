#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of a binary tree
 * @node: pointer to binary tree
 * Return: depth of tree or 0 if empty tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = -1;

	if (!node)
		return (0);
	while (node)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
