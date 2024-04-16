#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one
 * child in a binary tree
 * @tree: ptr to the root node of the binary tree
 *
 * Return: Number of nodes with at least one child in the binary tree,
 * or 0 if tree is null or if the tree has no children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);
	return (size + 1);
}
