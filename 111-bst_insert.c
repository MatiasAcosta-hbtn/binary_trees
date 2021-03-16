#include "binary_trees.h"

/**
 * binary_tree_node - Create a node
 * @parent: parent of new node
 * @value: value of new node
 * Return: return the new_node
 **/

bst_t *binary_node(bst_t **parent, int value)
{
	bst_t *new_node = NULL;

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = *parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}

/**
 * bst_insert - insert a node in BST
 * @tree: root of the tree
 * @value: the value
 * Return: pointer to new node
 **/

bst_t *bst_insert(bst_t **tree, int value)
{

	bst_t *new = NULL, *root = NULL;
	/* If the tree is empty, return a new node */

	root = *tree;

	if (tree == NULL)
		return (binary_tree_node(root, value));

	new = binary_tree_node(root, value);
	if (new == NULL)
		return (NULL);
	/* Otherwise, recur down the tree */
	if (value < new->n)
		new->left = bst_insert(&root->left, value);
	else if (value > new->n)
		new->right = bst_insert(&root->right, value);

	/* return the (unchanged) node pointer */
	return (new);
}
