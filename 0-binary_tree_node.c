#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 * @parent: A pointer to the parent node to be created
 * @value: New node valu.
 *
 * Return: NULL - if error occurs.
 *         Otherwise pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
