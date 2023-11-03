#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: the input binary_tree_t node
 * @value:the input int variable
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	newnode->n = value;
	return (newnode);
}
