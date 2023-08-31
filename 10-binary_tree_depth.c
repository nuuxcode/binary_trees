#include "binary_trees.h"
/**
 * binary_tree_depth -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		counter = 1 + binary_tree_depth(tree->parent);

	return (counter);
}
