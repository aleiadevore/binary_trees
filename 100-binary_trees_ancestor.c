#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node. If no common return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *left, *right;

    if (first == NULL || second == NULL)
        return (NULL);
    if (first == second)
        return((binary_tree_t*)first);

    left = first->parent, right = second->parent;
    if (first == second)
        return ((binary_tree_t*)first);
    second = second->parent;
    first = first->parent;
    
}
