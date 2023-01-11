#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: binary tree
 * Return: 1 is full 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	
	if (tree->right && tree->left)
		/* return 1 si la node possède deux child
		* retourne le résultat de l'opération logique "ET" 
		* de ces appels récursifs. Si le noeud courant n'a qu'un seul enfant, 
		* elle retourne 0 car l'arbre n'est pas complet dans ce cas.
		*/
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
