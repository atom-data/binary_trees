#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses binary tree using post-order
 * @tree: pointer to binary tree
 * @func: function pointer to the printing function
 * Return: none
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
