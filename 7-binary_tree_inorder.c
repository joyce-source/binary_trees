#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return; /*Do nothing if either the tree or func is NULL*/
}

/*Traverse the left subtree in in-order*/
binary_tree_inorder(tree->left, func);

/*Call the provided function for the current node*/
func(tree->value);

/*Traverse the right subtree in in-order*/
binary_tree_inorder(tree->right, func);
}

