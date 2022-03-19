#include <stdio.h>
#include "stack.h"

int main()
{
	int choice, element, peek;
	Stack_t stk;
	stk.top = -1;
	char ch;

	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\nEnter your choice : ");

	while (1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed in stack : ");
				scanf("%d", &element);
				if (Push(&stk, element) == FAILURE)
				{
					printf("INFO : Stack Full\n");
				} 
				break;
			case 2:
				if (Pop(&stk) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				Peep(&stk);
				break;
			case 4:
				if ((peek = Peek(&stk)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
					printf("INFO : Peek element is %d\n", peek);
				}
				break;
			case 5:
				return SUCCESS;
			default:
				printf("Invalid Choice.\n");
				break;
		}
	}
	return 0;
}
