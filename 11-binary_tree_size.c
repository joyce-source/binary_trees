#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0); /*Return 0 if the tree is NULL*/
}

/*Recursively calculate the size of the left and right subtrees*/
size_t left_size = binary_tree_size(tree->left);
size_t right_size = binary_tree_size(tree->right);

/*Return the total size, which is the sum of the sizes of the subtrees plus 1*/
return (left_size + right_size + 1);
}

