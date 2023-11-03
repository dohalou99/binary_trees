#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts node as the
 * right-child of another node
 * @parent: the input binary_tree_t node
 * @value: the input int variable
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newnode;
		return (newnode);
	}
	temp = parent->right;
	parent->right = newnode;
	newnode->right = temp;
	temp->parent = newnode;

	return (newnode);
}
