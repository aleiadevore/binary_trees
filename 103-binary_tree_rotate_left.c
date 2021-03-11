#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates tree left
 * @tree: root of tree
 *
 * Return: pointer to new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;
	int b = 0;

	if (!tree)
		return (tree);
	if (!tree->left && !tree->right)
		return (tree);

	new_root = tree->right;
	if (tree->right->left)
	{
		if (!tree->left)
		{
			tree->left = new_root->left;
			tree->left->parent = tree;
		}
		else
		{
			tree->right = new_root->left;
			tree->right->parent = tree;
			b = 1;
		}
	}
	else
		tree->left = NULL;
	new_root->left = tree;
	tree->parent = new_root;
	if (b == 0)
		tree->right = NULL;

	return (new_root);
}
