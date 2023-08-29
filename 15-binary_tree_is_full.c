#include "binary_trees.h"
/**
 * binary_tree_is_full -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 * Dscription: A full binary tree is a tree in which
 *  every node has either 0 or 2 children.
 *  In other words, every node is either a leaf or has two children.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (!tree)
		return (0);

	if ((!tree->left && !tree->right) || ((tree->left && tree->right)))
		counter *= 1;
	else
		counter *= 0;
	if (tree->right)
		counter *= binary_tree_is_full(tree->right);
	if (tree->left)
		counter *= binary_tree_is_full(tree->left);

	return (counter);
}
