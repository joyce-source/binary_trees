nclude "binary_trees.h"

/**
* binary_tree_nodes - counts the number of nodes with at least 1 child
*@tree: Pionter to the root node of the tree to count the nodes
*Return: the number of nodes with at least 1 child. or 0 if the tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);

size_t current_node_count = (tree->left != NULL || tree->right != NULL);

return (left_nodes + right_nodes + current_node_count);
}
