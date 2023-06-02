#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a left child node to the parent node.
 *
 * @parent: Pointer to the parent node to insert the left child.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the newly created node,
 * or NULL on failure or if parent is NULL.
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}
binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
binary_tree_t *old_left_child = parent->left;
/*Set the values of the new node*/
new_node->n = value;
new_node->parent = parent;
new_node->left = old_left_child;
new_node->right = NULL;

if (old_left_child != NULL)
{
old_left_child->parent = new_node;
}

parent->left = new_node;

return (new_node);
}
