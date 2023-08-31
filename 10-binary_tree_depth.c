#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree.
*
* @tree: Pointer to the node to measure the depth.
*
* Return: Depth of the node, or 0 if @tree is NULL or has no parent.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);


}