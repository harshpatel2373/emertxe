#include "tree.h"

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
    if(root)
	{
		//move to left sub tree
		inorder(root -> left);
		printf("%d ", root -> data);
		//move to right sub tree
		inorder(root -> right);
	}
}
