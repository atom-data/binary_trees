#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the lft-child of another node
 *
 * @parent: pointer to node to insert the left-child
 * @value: value for node
 * Return: pointer to new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *lChild;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	lChild = parent->left;

	if (lChild)
	{
		lChild->parent = node;
		node->left = lChild;
		parent->left = node;
	} else
	{
		parent->left = node;
	}

	return (node);
}
