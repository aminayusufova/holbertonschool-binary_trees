#include "binary_trees.h"

/**
 * _binary_tree_height - finds the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the tree, or 0 if tree is NULL.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	int r_height, l_height;

	if (!tree)
		return (0);
	r_height = _binary_tree_height(tree->right);
	l_height = _binary_tree_height(tree->left);
	return (1 + ((r_height >= l_height) ? r_height : l_height));
}

/**
 * _binary_tree_balance - finds the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor of the tree, or 0 if tree is NULL.
 */
int _binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}

/**
 * sub_tree_perfect - Checks if a subtree is perfect
 * @tree: pointer to the root node of the subtree to check.
 * Return: 1 if the subtree is perfect, 0 if it is not
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
	if (tree && !tree->right && !tree->left)
		return (1);

	if (tree && tree->right && tree->left)
		return (1 && sub_tree_perfect(tree->left)
				&& sub_tree_perfect(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 if it is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (_binary_tree_balance(tree) != 0)
		return (0);

	return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
