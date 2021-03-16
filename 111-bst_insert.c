#include "binary_trees.h"

/**
 * binary_tree_node - Create a node
 * @parent: parent of new node
 * @value: value of new node
 * Return: return the new_node
 **/

bst_t *binary_node(bst_t *parent, int value)
{
	bst_t *new_node = NULL;

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}


bst_t *bst_insert(bst_t **tree, int value)
{
     /* If the tree is empty, return a new node */
    if (tree == NULL)
        return binary_tree_node(tree, value);
 
    /* Otherwise, recur down the tree */
    if (value < new->n)
        new->left = bst_insert(tree->left, value);
    else if (value > new->n)
        new->right = bst_insert(tree->right, value);
 
    /* return the (unchanged) node pointer */
    return (*tree);
}
