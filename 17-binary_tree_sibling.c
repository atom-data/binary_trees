#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node in binary tree
 * @node: pointer to root of binary tree
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
