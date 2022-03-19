#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    //Check if list is empty
	if (*head == NULL)
	{
		return FAILURE;
	}

	//Check for first node
	if ((*head)->data == data)
	{
        //creating a local refrence
         Slist *temp1 = *head;

        //assigning head with second node address
         *head = temp1 -> link;

        //freeign the first node
        free(temp1);
		return SUCCESS;
	}
	
	//Assigning the head value to a temporary pointer variable
	Slist *temp = *head;
	Slist *past = NULL;

	//Traversing till n_data is reached
	while (temp)
	{
		if (temp->data == data)
		{
			past->link = temp->link;
			free(temp);
			return SUCCESS;
		}
		past = temp;
		temp = temp->link;
	}
	return DATA_NOT_FOUND;

}
