#include "binary_trees.h"
/**
 * binary_tree_nodes -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter += 1;
	if (tree->right)
		counter += binary_tree_nodes(tree->right);
	if (tree->left)
		counter += binary_tree_nodes(tree->left);

	return (counter);
}
