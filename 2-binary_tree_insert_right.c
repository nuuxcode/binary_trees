#include "binary_trees.h"
/*
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *oldNode;

	if (!parent)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->parent = parent;

	if (parent->right != NULL)
	{
		oldNode = parent->right;
		parent->right = newNode;
		newNode->right = oldNode;
		oldNode->parent = newNode;

	}
	else
	{
		parent->right = newNode;
		newNode->right = NULL;

	}
	return (newNode);


}