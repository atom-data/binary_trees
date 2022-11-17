#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses binary tree using in-order
 * @tree: pointer to binary tree
 * @func: function pointer to the printing function
 * Return: none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
