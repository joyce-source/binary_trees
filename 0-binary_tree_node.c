#include "binary_trees.h"

typedef struct binary_tree {
    int value;
    struct binary_tree *parent;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  /*Allocate memory for the new node*/
   binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
  if (node == NULL)
  {
    /*Memory allocation failed*/
    return NULL;
  }

    /* Set the node values*/
    node->value = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return node;
}
