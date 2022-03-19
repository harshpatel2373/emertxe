#include "sll.h"

void print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
    else
    {
    	Slist *temp = head;	

    	while (temp)		
    	{
    		printf("%d -> ", temp->data);
    		temp = temp->link;
    	}

    	printf("NULL\n");
    }
}