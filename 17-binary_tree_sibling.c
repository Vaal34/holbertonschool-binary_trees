#include "binary_trees.h"
/**
 * binary_tree_sibling - that finds the sibling of a node
 * @node: binary tree
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (0);

	if (node == node->parent->left)
		node = node->parent->right;
	else
		node = node->parent->left;
	return (node);
}
