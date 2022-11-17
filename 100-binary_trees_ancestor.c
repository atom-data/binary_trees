#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find lowest common ancestor of two nodes
 * @first: First node
 * @second: Second node
 * Return: pointer to lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *anc[1024] = { 0 }, *temp1, *temp2;
	int i = 0, j = 0;

	if (!first && !second)
		return (NULL);

	temp1 = (binary_tree_t *)first;
	anc[i++] = temp1;
	while (temp1)
	{
		anc[i++] = temp1->parent;
		temp1 = temp1->parent;
	}
	i--;

	j = 0;
	while (j < i)
	{
		temp2 = (binary_tree_t *)second;
		while (temp2)
		{
			if (temp2 == anc[j])
				return (anc[j]);
			temp2 = temp2->parent;
		}
		j++;
	}
	return (NULL);
}
