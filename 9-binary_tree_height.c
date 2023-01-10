#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	while (tree->right != NULL)
	{
		tree = tree->right;
		i++;
	}
	return (i);
}
