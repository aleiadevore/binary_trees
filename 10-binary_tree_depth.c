#include "binary_trees.h"

/**
 * binary_tree_depth - returns depth of binary tree
 * @tree: root of tree
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t const *node;
	int i = 0;

	if (!tree)
		return (0);
	node = tree;

	for (; node->parent != NULL; node = node->parent)
		i++;
	return (i);
}
