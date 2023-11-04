#include "binary_trees.h"

/**
 * binary_tree_height -  that measures the height of a binary tree
 * @tree: the input Pointer to a binary tree.
 * Return: The input size of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);

	return (height_left > h_right ? height_left : h_right);
}
