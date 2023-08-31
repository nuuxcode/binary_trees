#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 1;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{
		flag *= 1;
	}
	else
	{
		flag *= 0;
	}

	if (tree->right)
	{
		flag *= binary_tree_is_full(tree->right);
	}

	if (tree->left)
	{
		flag *= binary_tree_is_full(tree->left);
	}

	return (flag);
}
