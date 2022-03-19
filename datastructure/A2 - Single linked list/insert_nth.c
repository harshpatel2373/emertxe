#include "sll.h"

int sl_insert_nth(Slist **head, data_t e_data, data_t data)
{
  
    int i;
	
	//local reference to traverse through the link
	Slist *temp = *head, *temp2 = *head;

	/* check for if list is empty */
	if (NULL == (*head))
	{
		if (e_data == 1)
		{
			insert_at_first(head, data);
			return SUCCESS; 
		}
		else
		{
			return LIST_EMPTY;
		}
	}
	else
	{
		// if single node
		if ( ((*head) -> link) == NULL)
		{
			if (e_data == 1)
			{
				insert_at_first(head, data);
				return SUCCESS;  
			}
			else
			{
				return POSITION_NOT_FOUND;
			}
		}
		//for multi node case
		else
		{
			//iterate through the link to till the index value
			for(i = 1; i <e_data; i++)
			{
                *temp2 = *temp;
				temp = temp -> link;
				if(temp == NULL)
				{
					return POSITION_NOT_FOUND;
				}
			}
			//temp2 will be at the index value and so insert before this value
		    sl_insert_before(head, temp -> data, data);	
		
			return SUCCESS;	
		}
    }        

}
