#include "binary_trees.h"

/**
 * binary_tree_sibling - Find node sibling in a tree
 * @node: Node pointer
 *
 * Return: Pointer to the sibling, otherwise NUll
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
