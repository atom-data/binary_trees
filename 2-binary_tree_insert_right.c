#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to node to insert the left-child
 * @value: value for node
 * Return: pointer to new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *rChild;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	rChild = parent->right;
	if (rChild)
	{
		rChild->parent = node;
		node->right = rChild;
		parent->right = node;
	} else
	{
		parent->right = node;
	}
	return (node);
}
