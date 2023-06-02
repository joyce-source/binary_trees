#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: the number of leaves in the tree,or 0 if the tree is NULL
*
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0); /* Return 0 if the tree is NULL*/
}

if (tree->left == NULL && tree->right == NULL)
{
return (1); /*Return 1 if the current node is a leaf*/
}

/* Recursively count the number of leaves in the left and right subtrees*/
size_t left_leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);

/*Return the total number of leaves, which is sum of leaves in the subtrees*/
return (left_leaves + right_leaves);
}
