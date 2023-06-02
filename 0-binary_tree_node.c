#include "binary_trees.h"

/**
 *binary_tree_node-Creates a new binary tree node.
 *
 * @parent: Pointer to the parent node of the new node.
 * @value:  Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  /*Allocate memory for the new node*/
binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (node == NULL)
{
/*Memory allocation failed*/
return (NULL);
}
  /* Set the node values*/
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

return (node);
}
