#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int right_leaf;
	int left_leaf;

	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}

	right_leaf = binary_tree_is_leaf(node->right);
	left_leaf = binary_tree_is_leaf(node->left);

	if (right_leaf == 0 || left_leaf == 0)
	{
		return (0);
	}

	return (1);
}
