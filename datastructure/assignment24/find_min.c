#include "tree.h"

int findmin(Tree_t * root)
{
    if(NULL == root)
	{
		return FAILURE;
	}

	//if non empty

	//take local reference to traverse along the tree nodes
	Tree_t *temp;
	temp = (root);

	//go to left most element
	while(temp -> left != NULL)
	{
		temp = temp -> left;
	}
	return temp -> data;
}
