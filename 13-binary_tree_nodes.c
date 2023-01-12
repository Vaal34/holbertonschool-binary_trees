#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 * Return:  counts the nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* si la node a au moins un child return
	* 1 (root) + le nombre de fois qu'on rapelle la fonction 
	*/
	if (tree->right != NULL || tree->left != NULL)
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	else
		return (0);
}
