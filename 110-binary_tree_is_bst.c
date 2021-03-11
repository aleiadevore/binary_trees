#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if binary tree is BST
 * @tree: is pointer to root node of tree to check
 * Return: 1 if BST or 0 if NULL or not BST
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
    int min, max;

    if (tree == NULL)
        return (0);
    if (tree)
}