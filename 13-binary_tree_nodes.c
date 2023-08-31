#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count nodes.
 * Return: Number of nodes with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		counter += 1;
	}
	counter += binary_tree_nodes(tree->right);
	counter += binary_tree_nodes(tree->left);
	return (counter);
}
