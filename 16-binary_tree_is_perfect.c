#include <stdio.h>
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

/**
 * isPerfect - Checks if binary tree has 0 or 2 children per node
 * @tree: root node of tree
 * Return: 1 if TRUE. 0 if FALSE
 */
int isPerfect(const binary_tree_t *tree)
{
	int result = 0;
	binary_tree_t *l, *r;

	if (!tree)
		return (1);
	l = tree->left;
	r = tree->right;
	if ((l && r) || (!l && !r))
	{
		result = isPerfect(l) && isPerfect(r);
		return (result);
	}
	else
		return (0);
}


/**
 * binary_tree_is_perfect - Checks if binary tree is perfect.
 * Perfect binary tree means nodes=2^(h+1), where h=height.
 * Leaf nodes=2^h or (n+1)/2
 * @tree: pointer to root of the binary tree
 * Return: 0 if FALSE. 1 if TRUE
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!binary_tree_balance(tree) && isPerfect(tree))
		return (1);
	else
		return (0);
}
