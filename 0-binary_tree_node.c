#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 *
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node,
 * NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);

}
