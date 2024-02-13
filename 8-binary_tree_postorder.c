#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses with a post-order traversal.
 * @tree: Root node pointer of the tree to traverse.
 * @func: Function pointer to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
