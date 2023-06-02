#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
*
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return; /*Do nothing if either the tree or func is NULL*/
}

/*Traverse the left subtree in post-order*/
binary_tree_postorder(tree->left, func);

/*Traverse the right subtree in post-order*/
binary_tree_postorder(tree->right, func);

/*Call the provided function for the current node*/
func(tree->value);
}

