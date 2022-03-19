#include "sll.h"

int print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is Empty\n");
		return FAILURE;
	}

	while (head)		
	{
		printf("%d -> ", head -> data);
		head = head -> link;
	}

	printf("NULL\n");
	return SUCCESS;
}
