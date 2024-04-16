#include "main.h"

/**
 * binary_tree_postorder - func
 * @tree: val
 * @func: val
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

