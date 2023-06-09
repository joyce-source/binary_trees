#includ "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
{
return (0); /*Return 0 if the tree is NULL*/
}

/*Recursively calculate the height of the left subtree*/
left_height = binary_tree_height(tree->left);

/*Recursively calculate the height of the right subtree*/
right_height = binary_tree_height(tree->right);

/*Return the maximum height between the left and right subtrees, plus 1*/
return ((left_height > right_height ? left_height : right_height) +1);
}

