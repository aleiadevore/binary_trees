#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts node as left child
* @parent: parent node
* @value: node's value
* Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *oldleft = NULL;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);

	/* checking if parent has left node already */
	if (!new)
		return (NULL);
	if (parent->left != NULL)
		oldleft = parent->left;
		if (oldleft)
		{
			new->left = oldleft;
			oldleft->parent = new;
		}
	parent->left = new;
	return (new);
}
