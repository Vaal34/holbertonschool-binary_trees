#include "binary_trees.h"

int i = 0, j = 0;

/**
 * binary_tree_is_perfect - to check if a binary tree is perfect
 * @tree: pointer to binary tree
 * Return: 0 or the difference
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		binary_tree_is_perfect(tree->left);
		i++;
	}
	if (tree->right)
	{
		binary_tree_is_perfect(tree->right);
		j++;
	}
	if ((i > j) || (j > i))
		return (0);

	if (i == j)
	{
		return (1);
	}
	return (0);
}

