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
	int right_full, left_full;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{
		return (1);
	}

	right_full = binary_tree_is_full(tree->right);
	left_full = binary_tree_is_full(tree->left);

	if (right_full && left_full)
	{
		return (1);

	}
	return (0);


}
