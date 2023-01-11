#include "binary_trees.h"
/**
 * recursive_tree - to go throught all elements of the binary tree
 * @tree: pointer to binary tree
 * Return: 0 or 1
 */
int recursive_tree(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree->left)
	{
		i += 1 + binary_tree_is_perfect(tree->left);
	}
	if (tree->right)
	{
		j += 1 + binary_tree_is_perfect(tree->right);
	}
	if ((i > j) || (j > i))
		return (0);
	if (((tree->left) && (tree->right)) && (i == j))
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - to check if a binary tree is perfect
 * @tree: pointer to binary tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	return (recursive_tree(tree));
}
