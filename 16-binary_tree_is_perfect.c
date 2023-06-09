#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/*If left and right subtrees have different heights the tree is not perfect*/
if (left_height != right_height)
return (0);

/*Recursively check if the left and right subtrees are perfect*/
return (binary_tree_is_perfect(tree->left) && (tree->right));
}

