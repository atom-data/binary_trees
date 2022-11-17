#include <stdlib.h>
#include "binary_trees.h"

/**
 * deepestLeftLeafUtil - A utility function to find deepest leaf node.
 * @lvl:  level of current node.
 * @root: avl tree root
 * @maxlvl: pointer to the deepest left leaf node found so far
 * @isLeft: A bool indicate that this node is left child of its parent
 * @resPtr: Pointer to the result
 * Return: none
*/
void deepestLeftLeafUtil(heap_t *root, int lvl, int *maxlvl,
			 int isLeft, heap_t **resPtr)
{
	if (root == NULL)
		return;

	/**
	 * Update result if this node is left leaf and its level is more
	 * than the maxl level of the current result
	 */
	if (isLeft && !root->left && !root->right && lvl > *maxlvl)
	{
		*resPtr = root;
		*maxlvl = lvl;
		return;
	}

	/* Recur for left and right subtrees */
	deepestLeftLeafUtil(root->left, lvl + 1, maxlvl, 1, resPtr);
	deepestLeftLeafUtil(root->right, lvl + 1, maxlvl, 0, resPtr);
}

/**
 * deepestLeftLeaf - a wrapper over deepestLeftLeafUtil
 * @root: root of tree
 * Return: pointer to leaf
*/
heap_t *deepestLeftLeaf(heap_t *root)
{
	int maxlevel = 0;
	heap_t *result = NULL;

	deepestLeftLeafUtil(root, 0, &maxlevel, 0, &result);
	return (result);
}

/**
 * heap_extract - Extract root node of a Max Binary Heap tree
 * @root: root of the tree
 * Return: 1 on success. 0 on on failure
 */
int heap_extract(heap_t **root)
{
	heap_t *target, *newroot;
	heap_t *l, *r;

	if (!root)
		return (0);
	target = *root;
	l = (*root)->left;
	r = (*root)->right;

	newroot = deepestLeftLeaf(*root);
	newroot->parent = NULL;
	newroot->left = l;
	newroot->right = r;
	root = &newroot;

	free(target);
}
