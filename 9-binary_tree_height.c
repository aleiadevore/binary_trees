#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);
    if (left >= right)
        return (left + 1);
    else
        return (right);
}
