#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0); /*Return 0 if the node is NULL*/
}

if (node->left == NULL && node->right == NULL)
{
return (1); /*Return 1 if the node has no left and right child (leaf node)*/
}

return (0); /*Return 0 if the node is not a leaf*/
}

