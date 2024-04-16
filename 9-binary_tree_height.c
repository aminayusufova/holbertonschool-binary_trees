#include "binry_trees.h"

/**
 * binary_tree_height - func
 * @tree: var
 *
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	ig (left > right)
		return (left+1);
	else 
		return (right + 1);
}
