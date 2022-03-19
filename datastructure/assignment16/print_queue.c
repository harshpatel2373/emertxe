#include "queue.h"

int print_queue(Queue_t *front, Queue_t *rear)
{
	if (front == NULL)
	{
		printf("Error : List is Empty\n");
		return FAILURE;
	}

	Queue_t *temp = front;	
	printf("Front -> ");
	while (temp)		
	{
		printf("%d ", temp->data);
		temp = temp->link;
		if (temp != front)
		{
		    printf("-> ");
		}
		else
		    break;
	}

	printf("<- Rear\n");
	return SUCCESS;
}
