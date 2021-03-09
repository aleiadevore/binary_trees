#include "binary_trees.h"

/**
 * binary_tree_uncle - returns pointer to uncle of branch
 * @node: branch node
 *
 * Return: pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gparent, *parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	gparent = parent->parent;

	if (gparent->left == parent)
	{
		if (gparent->right)
			return (gparent->right);
		return (NULL);
	}
	if (gparent->left)
		return (gparent->left);
	return (NULL);
}
