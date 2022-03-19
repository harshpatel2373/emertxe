#include "stack.h"

int main()
{
	char check_char;
	int option, number, peek;

	/* Initiallising the top as NULL */
	Stack_t *top = NULL;

	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\n");
	printf("Enter choice: ");
	while (1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:

				/* To Push the element */
				printf("Enter the element you have to insert at the first : ");
				scanf("%d", &number);
				if ((Push(&top, number)) == FAILURE)
				{
					printf("INFO : Push operation Failure\n");
				}
				break;
			case 2:

				/* To Pop the top of the value in the stack */
				if ((Pop(&top)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				/* Printing or Dispaying the elements */
				Peep(top);
				break;
			case 4:
				/* To find the Peek element in the stack */
				if ((peek = Peek(&top)) == -1)
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
				printf("Enter proper choice !!\n");
				break;
		}

	}

	return SUCCESS;
}
