#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate binary tree to the left
 * @tree: root node of binary tree
 * Return: new root of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;
	binary_tree_t *gChild = NULL;
	binary_tree_t *lChild = NULL, *rChild = NULL;

	rChild = gChild = lChild;
	lChild = rChild;

	if (!tree)
		return (NULL);

	/* Initialize pointers */
	root = tree->right;
	lChild = tree->left;
	rChild = tree->right;
	if (tree->right)
		if (tree->right->left)
			gChild = tree->right->left;

	tree->parent = rChild;
	rChild->parent = NULL;
	rChild->left = tree;

	if (gChild)
		tree->right = gChild;
	else
		tree->right = NULL;

	return (root);
}
