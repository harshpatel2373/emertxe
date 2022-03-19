#include "sll.h"

int sl_insert_after(Slist **head, data_t e_data, data_t data)
{
    if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Assigning the head value to a temp pointer variable
	Slist *temp = *head;

	//Traverse the list till n_data is found
	while (temp && temp->data != e_data)
	{
		temp = temp->link;
	}
	if (temp)
	{
		//Create a new node
		Slist *new = malloc(sizeof(Slist));

		//Validation
		if (new == NULL)
		{
			return FAILURE;
		}
		new->data = data;
		new->link = temp->link;
		temp->link = new;
		return SUCCESS;
	}
	return DATA_NOT_FOUND;

}
