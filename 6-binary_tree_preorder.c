#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses binary tree using preorder
 * @tree: pointer to binary tree
 * @func: function pointer to the printing function
 * Return: none
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
