#include "tree.h"

int findmax(Tree_t * root)
{
    if (NULL == root)
	{
		return FAILURE;
	}

	//if non empty

	//take local reference to traverse along the tree nodes
	Tree_t *temp;
	temp = root;

	//go to right most element
	while(temp -> right != NULL)
	{
		temp = temp -> right;
	}
	return temp -> data;
}
