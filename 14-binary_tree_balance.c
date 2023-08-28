#include "binary_trees.h"
/**
 * binary_tree_balance -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);

	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);

	return (left - right);
}
