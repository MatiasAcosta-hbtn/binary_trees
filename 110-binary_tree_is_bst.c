#include "binary_trees.h"


int isBST(const binary_tree_t *tree, const binary_tree_t *left, const binary_tree_t *right)
{
	if (tree == NULL)
		return (1);

	if (left != NULL && tree->n <= left->n)
		return (0);
	if (right != NULL && tree->n >= right->n)
		return (0);

	return (isBST(tree->left, left, tree) && isBST(tree->right, tree, right));
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (tree == NULL)
		return (0);

	return isBST(tree, left, right);
}
