#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree.
*
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the tree, or 0 if @tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_count;
	size_t left_count;

	if (!tree)
	{
		return (0);
	}
	right_count = binary_tree_height(tree->right);
	left_count = binary_tree_height(tree->left);
	if (right_count > left_count)
	{
		return (right_count + 1);
	}
	return (left_count + 1);

}
