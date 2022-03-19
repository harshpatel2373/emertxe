#include "sll.h"

int print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
		return FAILURE;
	}

	Slist *temp = head;	
	while (temp)		
	{
		printf("%d -> ", temp->data);
		temp = temp->link;
	}

	printf("NULL\n");
	return SUCCESS;
}