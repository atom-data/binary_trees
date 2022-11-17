#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse binary tree using level-order
 * @tree: pointer to binary tree
 * @func: function pointer to call for each node
 * Return: none
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !tree->parent)
		return;

	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
