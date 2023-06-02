#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a right child node to the parent node.
 *
 * @parent: Pointer to the parent node to insert the right child.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the newly created node,
 * or NULL on failure or if parent is NULL.
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}

/*create a new node*/
binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
 /* Set the values of the new node*/
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
if (parent->right != NULL)
{
/*If parent already has a right child, the new node takes its place*/
/* The old right child becomes the right child of the new node*/
new_node->right = parent->right;
parent->right->parent = new_node;
}
else
{
/*If parent doesn't have a right child,assign the new node as the right child*/
new_node->right = NULL;
}
parent->right = new_node; /*Set the new node as the right child of the parent*/
return (new_node);
}
