#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 50);
	root->right = binary_tree_node(root, 100);

	height = binary_tree_height(root);
	printf("Height of tree with root node (%d): %lu\n", root->n, height);

	binary_tree_print(root);
	binary_tree_delete(root);
	return (0);
}
