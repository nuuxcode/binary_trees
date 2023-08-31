#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_perfect, left_perfect;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && tree->left))
	{
		return (1);
	}

	right_perfect = binary_tree_is_perfect(tree->right);
	left_perfect = binary_tree_is_perfect(tree->left);
	if (right_perfect && left_perfect)
	{

		return (1);
	}
	return (0);

}
