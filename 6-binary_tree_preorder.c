#include "binary_tress.h"
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;/*Do nothing if either the tree or func is NULL*/
}

/*Call the provided function for the current node*/
func(tree->value);

/*Traverse the left subtree in pre-order*/
binary_tree_preorder(tree->left, func);

/*Traverse the right subtree in pre-order*/
binary_tree_preorder(tree->right, func);
}

