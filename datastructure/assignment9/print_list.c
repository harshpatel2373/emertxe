#include "dll.h"

int print_list(Dlist *head)
{
	/* Cheking the list is empty or not */
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
		return FAILURE;
	}
	
	/* Assigning the temp value as head */
	Dlist *temp = head;	
	printf("Head -> ");
	while (temp)		
	{
		/* Printing the list */
		printf("%d <-", temp -> data);

		/* Travering in forward direction */
		temp = temp -> next;
		if (temp)
		    printf("> ");
	}

	printf(" Tail\n");
	return SUCCESS;
}