#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t nodes;

	root = binary_tree_nodes(NULL, 98);
	root->left = binary_tree_nodes(root, 12);
	root->right = binary_tree_nodes(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	nodes = binary_tree_nodes(root);
	printf("Nodes from %d: %lu\n", root->n, nodes);
	nodes = binary_tree_nodes(root->right);
	printf("Nodes from %d: %lu\n", root->right->n, nodes);
	nodes = binary_tree_nodes(root->left->right);
	printf("Nodes from %d: %lu\n", root->left->right->n, nodes);
	return (0);
}
