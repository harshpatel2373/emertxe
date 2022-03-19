#include "dll.h"

int main()
{
	char check_char;
	int option, number, key;


	Dlist *head = NULL; //initialize the header to NULL
	Dlist *tail = NULL; //initialize the tail to NULL

	printf("\n1. Dll Insert last\n2. Dll Insert first\n3. Dll delete Last\n4. Dll delete first\n5. Dll delete list\n6. Print list\n7. Exit\nEnter your option: ");
	while (1)
	{

		/*ask user options*/
		scanf("\n%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &number);

				/*insert_at_last function call*/
				if (dl_insert_last(&head, &tail, number) == -1) //pass by reference
				{
					printf("INFO : Insertion Failure\n");
				}
				break;
			case 2:
				/*To insert the element at first */
				printf("Enter the element you have to insert at the first : ");
				scanf("%d", &number);
				if (dl_insert_first(&head, &tail, number) == -1)
				{
					printf("INFO : Insertion Failure\n");
				}
				break;

			case 3:
				/* Delete a last link*/
				if (dl_delete_last(&head, &tail) == -1)
				{
					printf("INFO : Delete last Failure, List is empty\n");
				}
				else
				{
					printf("INFO : Delete last Successfull\n");
				}
				break;
			case 4:
				/*To delete first node */
				if (dl_delete_first(&head, &tail))
				{
					printf("INFO : Delete first Failure, List is empty\n");
				}
				else
				{
					printf("INFO : Delete first Successfull\n");
				}
				break;
			case 5:
				/* Delete list */
				if (dl_delete_list(&head, &tail) == -1)
				{
					printf("INFO : Delete list Failure, List is empty\n");
				}
				else
				{
					printf("INFO : Delete list Successfull\n");
				}
				break;
			case 6:
				/* print list function call*/
				print_list(head);
				break;
			case 7 : 
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
