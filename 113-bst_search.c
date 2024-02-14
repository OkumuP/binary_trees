#include "binary_trees.h"

/**
 * bst_search - Searche a value in a BST.
 * @tree: Root node pointer of the BST to search.
 * @value: The value to search in the BST.
 *
 * Return: Pointer to the value containing the value otherwise NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
