#include "binary_trees.h"
/*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldNode;
	binary_tree_t *newNode;

	if (!parent)
	{
		return (NULL);
	}

	/*create a new node */
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		oldNode = parent->left;
		parent->left = newNode;
		newNode->left = oldNode;
		oldNode->parent = newNode;
	}
	else
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	return (newNode);

}