#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of the node
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling node, if node or parent is NULL return NULL,
 * if there is no sibling return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);

}
