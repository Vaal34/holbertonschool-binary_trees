#include "binary_trees.h"
/**
 * binary_tree_node - to create a binary_tree_node
 * @parent: Pointer to the parent node
 * @value: value of the parent
 * Return:  a binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent;

	new_parent = malloc(sizeof(binary_tree_t));
	if (!new_parent)
		return (NULL);

	new_parent->parent = parent;
	new_parent->n = value; /* if there is only one parent */
	new_parent->left = NULL;
	new_parent->right = NULL;

	if (parent != NULL)
	{
		if (parent->n < value)
		{
			parent = new_parent->left;
		}
		else
		{
			parent = new_parent->right;
		}
	}
	parent = new_parent;
	return (parent);
}
