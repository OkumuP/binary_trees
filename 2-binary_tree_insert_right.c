#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert the right-child as a node
 *                            of another in a binary tree.
 * @parent: the right-child pointer node.
 * @value: new node value
 *
 * Return:  NULL if parent is NULL or error occurs
 *         Otherwise - the new node pointer.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
