#include "tree.h"

int find_height(Tree_t *root)
{
    int lHeight;
	int rHeight;

	//count nodes while Traversing
	if (root == NULL)
	{
		return 0;
	}
	// compute the depth of each subtree

	lHeight = find_height(root->left);
	rHeight = find_height(root->right);

	// use the larger one
	if (lHeight > rHeight) return(lHeight+1);
	else return(rHeight+1);
}
