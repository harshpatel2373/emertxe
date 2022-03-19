#include "sll.h"

int sl_delete_list(Slist **head)
{
    //Validation

	if (*head == NULL)
	{
		return FAILURE;
	}
	//Assigning the head value to a temporary pointer
	Slist *temp;
	//Traversing through all the nodes and freeing the memory
	while ((*head) != NULL)
	{
		temp = *head;
		*head = temp->link;
		free(temp);
	}
	return SUCCESS;
	
}
