#include "binary_trees.h"

/**
 * binary_tree_inorder - Uses an in-order traversal to go through a binary.
 * @tree: Root node pointer of the tree to traverse.
 * @func: Function pointer to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
