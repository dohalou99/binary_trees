#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left -  function that inserts a node 
 * as the left-child of another node
 * @parent: the input binary_tree_t node
 * @value: the input int variable
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
