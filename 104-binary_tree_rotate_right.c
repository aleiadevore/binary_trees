#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates binary tree right
 * @tree: root of tree
 *
 * Return: pointer to new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree)
		return (tree);
	if (!tree->left && !tree->right)
		return (tree);

	new_root = tree->left;
	if (tree->left->right)
	{
		tree->right = new_root->right;
		tree->right->parent = tree;
	}
	else
		tree->right = NULL;
	new_root->right = tree;
	tree->parent = new_root;
	tree->left = NULL;

	return (new_root);
}
