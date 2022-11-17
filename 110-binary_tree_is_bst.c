#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotate binary tree to the right
 * @tree: root node of binary tree
 * Return: new root of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;
	binary_tree_t *gChild = NULL;
	binary_tree_t *lChild = NULL;

	if (!tree)
		return (NULL);

	if (tree && !tree->right && !tree->left)
		return (tree);

	/* Initialize pointers */
	root = tree->left;
	lChild = tree->left;
	if (tree->left)
		if (tree->left->right)
			gChild = tree->left->right;

	tree->parent = lChild;
	lChild->parent = NULL;
	lChild->right = tree;

	if (gChild)
	{
		tree->left = gChild;
		gChild->parent = tree;
	}
	else
		tree->left = NULL;

	return (root);
}
