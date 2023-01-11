#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: binary tree
 * Return: 1 is full 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
