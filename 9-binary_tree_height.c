#include "binary_trees.h"

/**
 * height_finder - measure the height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: if tree is NULL return 0
 */

size_t height_finder(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = height_finder(tree->left);
	right = height_finder(tree->right);
	if (left > right)
	return (left + 1);
	else
	return (right + 1);
}

/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t total;

	total = height_finder(tree);

	if (total == 0)
		return (total);
	return (total - 1);
}
