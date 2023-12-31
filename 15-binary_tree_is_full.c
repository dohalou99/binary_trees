#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full.
 * @tree: the input pointer to a binary tree.
 * Return: (1) if the binary tree is full,(0)if it is not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
