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
 * print_level - prints all nodes at given level
 * @tree: root of tree
 * @level: tree level
 * @func: function to print value
 * Return: void
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - prints in level order
 * @tree: root of tree
 * @func: function to print node value
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		print_level(tree, i, func);
}
