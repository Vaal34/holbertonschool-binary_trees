#include "binary_trees.h"
/**
*binary_tree_insert_right - to insert a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: value of the parent
 * Return:  a binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent = NULL;

	if (parent == NULL)
		return (NULL);

	new_parent = malloc(sizeof(binary_tree_t));
	if (!new_parent)
		return (NULL);

	new_parent->parent = parent;
	new_parent->n = value; /* if there is only one parent */
	new_parent->left = NULL;
	new_parent->right = NULL;

	if (parent->right != NULL)
	{
		new_parent->right = parent->right;
		parent->right->parent = new_parent;
	}
	parent->right = new_parent;
	return (new_parent);
}
