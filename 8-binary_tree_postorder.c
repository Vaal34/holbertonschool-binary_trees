#include "binary_trees.h"
/**
 * binary_tree_postorder - to go through a binarytree using in-order traversal
 * @tree: pointer to the binary tree
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
