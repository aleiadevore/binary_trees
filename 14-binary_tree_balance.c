#include "binary_trees.h"

/**
 * binary_tree_height - finds height of binary tree
 * @tree: root of tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}


/**
 * binary_tree_balance - returns balance factor
 * @tree: root of tree
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	balance = l - r;

	return (balance);
}
