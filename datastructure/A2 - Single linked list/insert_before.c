#include "sll.h"

int sl_insert_before(Slist **head, data_t e_data, data_t data)
{
    //Check for list empty
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Creating a node
	Slist *new = malloc(sizeof(Slist));

	//Assign head value to a temporary pointer variable
	Slist *temp = *head;

	//Check the first node
	if (temp->data == e_data)
	{
		new->data = data;
		new->link = *head;
		*head = new;
		return SUCCESS;
	}

	//Assigning the temp variable value to another variable
	Slist *prev = temp;

	//Traverse till the n_data node is reached
	while (temp)
	{
		if (temp->data == e_data)
		{
			new->data = data;
			new->link = prev->link;
			prev->link = new;
			return SUCCESS;
		}
		prev = temp;
		temp = temp->link;
	}
	return DATA_NOT_FOUND;

}
