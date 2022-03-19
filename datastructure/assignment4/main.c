
#include "sll.h"

int main()
{
	char check_char;
	int option, number, key, ret;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert sorted\n2. Find loop\n3. Create loop\n4. Print list\n5. Exit\nEnter Your choice : ");
	while (1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the data to be inserted : ");
				scanf("%d", &number);
				if (insert_sorted(&head, number) == -1)
				{
					printf("INFO : Insert sorted failure\n");
				}
				else
				{
					printf("INFO : Insert sorted success\n");
				}
				break;
			case 2:
				/* Function to find the loop*/
				if ((ret = find_loop(head)) == DATA_NOT_FOUND)
				{
					printf("INFO : Loop is not found\n");
				}
				else if (ret == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
					printf("INFO : Loop found\n");
				break;
			case 3:
				printf("Enter a data to create the loop : ");
				scanf("%d", &number);

				/*insert_at_last function call*/
				if ((ret = create_loop(&head, number)) == LIST_EMPTY) //pass by reference
				{
					printf("INFO : List is empty\n");
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf("INFO : %d not found at the list\n", number);
				}
				else
				{
					printf("INFO : Loop created successfully\n");
				}
				break;

			case 4:
				/* print list function call*/
				print_list(head);
				break;
			case 5: return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
