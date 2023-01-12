#include "binary_trees.h"
/**
 * binary_tree_depth - to measure the depth of a node in a binary tree
 * @tree: pointer to the binary tree
 * Return: depht of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	int i = 0;

	if (tree == NULL)
		return (0);

	while (temp->parent)
	{
		i++;
		temp = temp->parent;
	}
	return (i);
}
