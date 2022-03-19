#include "queue.h"

/* Function to print the Queue */
int print_queue(Queue_t *q)
{
	/* Intializing i as q -> front */
	int i = q -> front;

	/* Checking the queue is empty or not */
	if (q -> front == -1 && q -> rear == -1)
	{
		printf("INFO : Queue is empty\n");
		return FAILURE;
	}

	printf("Front -> ");
	do
	{
		printf("%d ", q -> Que[i]);
		i = (i + 1) % SIZE;
		/* Printing the queue till it will reaches end */	
	}while (i != (q -> rear + 1) % SIZE);

	printf("<- Rear\n");

	/* Returning SUCCESS */
	return SUCCESS;
}
