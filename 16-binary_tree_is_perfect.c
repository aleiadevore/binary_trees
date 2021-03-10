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
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: root of tree
 *
 * Return: 1 for perfect 0 for not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, l, r, full;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	balance = l - r;
	full = binary_tree_is_full(tree);
	if (balance == 0 && full == 1)
		return (1);
	else
		return (0);
}
