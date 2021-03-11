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

	if (!tree)
		return (tree);
	if (!tree->left && !tree->right)
		return (tree);

	new_root = tree->right;
	if (tree->right->left)
	{
		tree->left = new_root->left;
		tree->left->parent = tree;
	}
	else
		tree->left = NULL;
	new_root->left = tree;
	tree->parent = new_root;
	tree->right = NULL;

	return (new_root);
}
