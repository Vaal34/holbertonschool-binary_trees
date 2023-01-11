#include "binary_trees.h"
/**
 * binary_tree_t - that finds the uncle of a node
 * @node: binary tree
 * Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent->parent == NULL)
		return (0);

	if (node->parent == node->parent->parent->left)
		node = node->parent->parent->right;
	else
		node = node->parent->parent->left;
	return (node);
}
