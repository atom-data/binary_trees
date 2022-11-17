#include "binary_trees.h"

/**
 * binary_tree_height - finds height of a binary tree
 * @tree: pointer to binary tree
 * Return: height of tree or 0 if empty tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight = 0, rHeight = 0;

	if (!tree)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);
	if (lHeight > rHeight)
		return (1 + lHeight);
	else
		return (1 + rHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Balance Factor = height(left subtree) - height(right subtree)
 * @tree: pointer to root of the binary tree
 * Return: 0 if tree is NULL else ?
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lSubtree = 0, rSubtree = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	lSubtree = binary_tree_height(tree->left);
	rSubtree = binary_tree_height(tree->right);
	return (lSubtree - rSubtree);
}
