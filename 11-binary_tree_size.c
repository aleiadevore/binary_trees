#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure size
 * Return: if tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	/* Betty approved line break?? */
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
