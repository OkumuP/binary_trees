#include "binary_trees.h"

/**
 * is_full_recursive - Check if the binary tree is full recursively
 * @tree: Root node pointer of the tree to check
 *
 * Return: 1 if full otherwise 0
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Check if the binary tree is full
 * @tree: Root node pointer of the tree to be checked
 *
 * Return: 1 if full otherwise 0 if not full or null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
