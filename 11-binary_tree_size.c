#include "binary_trees.h"
/**
 * binary_tree_size -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = binary_tree_size(tree->right);

	if (tree->left)
		left = binary_tree_size(tree->left);

	return (left + right + 1);
}
