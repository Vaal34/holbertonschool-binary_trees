#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 * Return: hight of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL)
		return (0);

	while (tree->right != NULL)
	{
		tree = tree->right;
		i++;
	}
	while (tree->left != NULL)
	{
		tree = tree->left;
		j++;
	}

	return (i + (j - i));
}
