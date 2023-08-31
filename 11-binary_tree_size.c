#include "binary_trees.h"
/**
* binary_tree_size - Measures the size of a binary tree (number of nodes).
*
* @tree: Pointer to the root node of the tree to measure the size.
*
* Return: Size of the tree, or 0 if @tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_count, left_count;

	if (!tree)
	{
		return (0);
	}
	right_count = binary_tree_size(tree->right);
	left_count = binary_tree_size(tree->left);
	return (right_count + left_count + 1);

}