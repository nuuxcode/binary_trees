#include "binary_trees.h"
/**
 * binary_tree_node -  creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
}
