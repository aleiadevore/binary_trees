#include "binary_trees.h"

/**
 * binary_tree_leaves - returns number of leaves on binary tree
 *  @tree: root of tree
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*binary_tree_t const *node;*/

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
