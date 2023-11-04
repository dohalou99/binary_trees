#include "binary_trees.h"

/**
 * _p_recursion -function that Emulation of pow function using recursion
 * @x: the input Base
 * @y: the input Exponent
 *
 * Return: the Mathematical power
 */
int _p_recursion(int j, int k)
{
	if (k < 0)
		return (-1);

	if (k == 0)
		return (1);

	return (j * _p_recursion(j, k - 1));
}

/**
 * binary_tree_height - func that measures the height of a binary tree
 * @tree: the input pointer to a binary tree.
 * Return: The input size of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_lea - func that counts the leaves in a binary tree.
 * @tree: the input pointer to a binary tree.
 *
 * Return: the Numb of leafs counts the leaves in a binary tree.
 */

size_t binary_tree_lea(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	return (binary_tree_lea(tree->left) + binary_tree_lea(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the input pointer to a binary tree.
 * Return: (1) if is perfect, (0) if is not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int j, lea;

	if (!tree)
		return (0);

	j = (int)binary_tree_height(tree);
	lea = (int)binary_tree_lea(tree);

	if ((_p_recursion(2, j)) == lea)
		return (1);
	return (0);
}
