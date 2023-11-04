#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that Counts the nodes 
 * at least 1 child in a binary tree
 * @tree: the input Pointer to a binary tree.
 * Return:the input Num of nodes that at least have a child in a binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
