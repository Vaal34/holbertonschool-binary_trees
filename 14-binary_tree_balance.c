#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: bonary tree
 * Return: return the balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree->left != NULL)
		i += 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		j += 1 + binary_tree_height(tree->right);
	return (j - i);
}
