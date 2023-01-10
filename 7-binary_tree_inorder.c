#include "binary_trees.h"
/**
 * binary_tree_inorder - to go through a binarytree using in-order traversal
 * @tree: pointer to the binary tree
 * @func: function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
