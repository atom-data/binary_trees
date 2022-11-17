#include "binary_trees.h"

/**
 * isLeaf - Checks if node is a leaf
 * @node: pointer to the nodeo
 * Return: 1 if TRUE. 0 if FALSE
 */
int isLeaf(const binary_tree_t *node)
{
	return ((node->left == NULL) && (node->right == NULL));
}

/**
 * binary_tree_is_heap - Checks if tree is a Max Binary Heap
 * @tree: pointer to the tree root
 * Return: 1 if TRUE. 0 if FALSE
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (isLeaf(tree))
		return (1);

	if (tree->left)
	{
		if (tree->left->n > tree->n)
			return (0);
	}
	if (tree->right)
	{
		if (tree->right->n > tree->n)
			return (0);
	}
	return (binary_tree_is_heap(tree->left) && binary_tree_is_heap(tree->right));
}
