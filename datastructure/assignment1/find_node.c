#include "sll.h"

int find_node(Slist *head, data_t data)
{
    int count = 0;
    //Check for list empty
	if (head == NULL)
	{
		return FAILURE;
	}
	//Check for first node
	if ((head)->data == data)
	{
        count++;
		return count;
	}
	//Assigning head value to a temporary variable
	Slist *temp = head;

	//Traversing through the list till n_data is found
	while(temp)
	{
        count++;
		if (temp->data == data)
		{
			return count;
		}
		temp = temp->link;
	}
	
}
