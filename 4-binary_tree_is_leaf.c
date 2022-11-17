#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: binary tree node to check
 * Return: 1 if TRUE. 0 if FALSE
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
