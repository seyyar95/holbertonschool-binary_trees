#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0,
	       right_leaves = 0, left_leaves = 0;

	if (!tree)
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	if (left_height != right_height)
		return (0);

	right_leaves = binary_tree_leaves(tree->right);
	left_leaves = binary_tree_leaves(tree->left);

	return (right_leaves == left_leaves);
}
