#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 *
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node,
 * NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;

	return (newNode);
}
