#include "binary_trees.h"

/**
 * binary_tree_is_root - function that Checks if a given node is a root.
 * @node: the input Pointer node of the tree.
 * Return: (1) if node is root, (0)if it is not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
