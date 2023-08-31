#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: Number of leaves in the tree, or 0 if @tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t righ_leaves, left_leaves;

	if (!tree)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}

	righ_leaves = binary_tree_leaves(tree->right);
	left_leaves = binary_tree_leaves(tree->left);

	return (righ_leaves + left_leaves);
}
