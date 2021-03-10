#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts node as left child
* @parent: parent node
* @value: node's value
* Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *oldright = NULL;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);

	/* checking if parent has right node already */
	if (!new)
		return (NULL);
	if (parent->right != NULL)
		oldright = parent->right;
		if (oldright)
		{
			new->right = oldright;
			oldright->parent = new;
		}
	parent->right = new;
	return (new);
}
