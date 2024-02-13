#include "binary_trees.h"

/**
 * binary_tree_preorder - Uses pre-order traversal to go thro a binary tree
 * @tree: Root node pointer of the tree to traverse.
 * @func: Function pointer to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
