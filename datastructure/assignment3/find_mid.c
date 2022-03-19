#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{
    // cheking if list is empty
   if(head == NULL)
      return LIST_EMPTY;

   // assigning two temporary pointers
   Slist *temp1 = head;
   Slist *temp2 = head;

   // loop to get mid element
   while(temp1)
	{
		temp1 = temp1->link;
		if(temp1 == NULL)
		{
			break;
		}
		temp1 = temp1->link;
		temp2 = temp2->link;
	}
   //returning mid value
   *mid = temp2 -> data;
   return SUCCESS;

} 
