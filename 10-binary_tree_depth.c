#include "binary_trees.h"

/**
 * binary_tree_depth -a function that measures the depth of a node in a binary tree
 * @tree: the input Pointer to a binary tree.
 * Return: The input depth of the node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}
