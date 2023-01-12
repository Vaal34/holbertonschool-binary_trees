#include "binary_trees.h"
/**
 * binary_tree_is_perfect - to check if a binary tree is perfect
 * @tree: pointer to binary tree
 * Return: 0 or the difference
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		i += 1 + binary_tree_is_perfect(tree->left);
	}
	if (tree->right)
	{
		j += 1 + binary_tree_is_perfect(tree->right);
	}
	if (tree->right == NULL && tree->left == NULL && tree->parent == NULL)
		return (1);
	if ((i > j) || (j > i))
		return (0);
	if (((tree->left) && (tree->right)) && (i == j))
		return (1);
	return (0);
}
