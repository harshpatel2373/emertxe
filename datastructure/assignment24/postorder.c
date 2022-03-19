#include "tree.h"

/* Function to print the tree in post order */
int postorder(Tree_t *root)
{
    if(root)
	{
		//move to left sub tree
		postorder(root -> left);
		//move to right sub tree
		postorder(root -> right);
		printf("%d ", root -> data);

	}
}
