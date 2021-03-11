#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
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
 *  binary_tree_is_leaf - checks if node is a leaf
 *  @node: node to check
 *
 *  Return: 1 if leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

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

/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: pointer to root of tree to check
 * Return: if NULL return 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
    size_t left, right;
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	
	l = tree->left;
	r = tree->right;
	left = binary_tree_height(l);
	right = binary_tree_height(r);
	if (left == right)
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_complete(r))
			return (1);
	}
	else if (left == right + 1)
	{
		if (binary_tree_is_complete(l) && binary_tree_is_perfect(r))
			return (1);

	}
	return (0);
}
