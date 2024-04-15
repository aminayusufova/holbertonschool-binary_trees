#include "binary_trees.h"

/**
 * binary_tree_size - counts the number of nodes in a binary tree
 * @tree: ptr to the root of the binary tree
 *
 * Return: number of nodes in the tree or 0 if the tree is empty 
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t size = 0;

        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (1);

        size += binary_tree_size(tree->left);
        size += binary_tree_size(tree->right);
        return (size + 1);
}
