#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0, full = 0;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
	{
		full = binary_tree_is_full(tree);
		if (full == 1)
			return (1);
	}
	else
	{
		return (0);
	}
}
