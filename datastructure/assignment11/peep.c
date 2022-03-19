#include "stack.h"

/* Function for print the data's in the stack */
int Peep(Stack_t *s)
{
	/* Checking the Stack is empty or not */
	if (s -> top == -1)
	{
		printf("INFO : Stack is empty\n");
		return FAILURE;
	}

	/* Declaring the temp for store the top value to print the values in the Stack*/
	printf("Top -> ");
	int temp;
	for (temp = s -> top; temp > -1; temp--)
	{
		printf("%d ", s->stack[temp]);
	}
	printf("\n");
	return SUCCESS;
}