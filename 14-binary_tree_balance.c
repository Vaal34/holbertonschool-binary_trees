#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: bonary tree
 * Return: return the balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

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
	return (j - i);
}
