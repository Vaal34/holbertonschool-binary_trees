#include "binary_trees.h"
/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: binary tree
 * Return: 0 if is empty, 1 if is leaf, and add node with child
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
		/*
		* si le noeud courant n'est pas une feuille,
		* appelle récursivement la fonction sur les enfants gauche
		* et droit et additionne leur compte
		*/
}
