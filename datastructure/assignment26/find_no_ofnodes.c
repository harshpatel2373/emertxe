#include "tree.h"

int total_nodes(Tree_t *root)
{
    //count nodes while Traversing
	if (root == NULL)
	{
		return 0;
	}

	return( total_nodes(root -> left) + 1 + total_nodes(root -> right) );
}
