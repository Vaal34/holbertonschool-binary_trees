#include "binary_trees.h"
/**
 * binary_tree_delete - to delete an entire binary tree
 * @parent: Pointer to the parent node
 * @value: value of the parent
 * Return:  a binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);
}
