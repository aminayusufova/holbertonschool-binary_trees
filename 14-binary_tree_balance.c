#include "binary_trees.h"

/**
 * _binary_tree_height - finds the height of a binary tree
 * @tree: ptr to the root node of the binary tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
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
 * binary_tree_balance - counts the balance factor of a binary tree
 * @tree: ptr to the root node of the binary tree
 *
 * Return: Balance factor of the binary tree,
 * or 0 if tree is NULL or if it's an empty tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
