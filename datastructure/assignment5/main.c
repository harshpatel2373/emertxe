
#include "sll.h"

int main()
{
	char check_char;
	int option, number, key;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert at last\n2. Sort list\n3. Print list\nEnter your choice : ");
	while (1)
	{

		/* ask user options */
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &number);

				/* insert_at_last function call */
				if (insert_at_last(&head, number) == -1) 
				{
					printf("INFO : Insert last failed\n");
				}
				break;
			case 2:
				/* Function to sort the link */
				if (sl_sort(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Sorting successfull\n");
				}
				break;

			case 3:
				/* print list function call*/
				print_list(head);
				break;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
