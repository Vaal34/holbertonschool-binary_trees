#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: bonary tree
 * Return: return the balance of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0, i = 0;

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	i = l - r;

	return (i);
}

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

	if (tree->left != NULL)
		i += 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		j += 1 + binary_tree_height(tree->right);

	if (i >= j)
		return (i);
	else
		return (j);
}
