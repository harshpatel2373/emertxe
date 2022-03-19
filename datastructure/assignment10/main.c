#include "dll.h"

int main()
{
	char check_char;
	int option, number, key, ret;


	Dlist *head = NULL; /* initialize the header to NULL */
	Dlist *tail = NULL; /* initialize the tail to NULL */

	printf("1. Insert first\n2. Insert before\n3. Insert after\n4. Delete element\n5. Print list\nEnter your choice : ");
	while(1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				/* To insert the element at last */
				printf("Enter the data you have to insert : ");
				scanf("%d", &number);

				/* If the return value is 0 link sucess else not success */
				if (dl_insert_last(&head, &tail, number) == -1)
				{
					printf("INFO : Insert last Failure\n");
				}
				break;
			case 2:
				/* To insert the element before a number present in the list */
				printf("Enter the existing number : ");
				scanf("%d", &number); /* Scaning the number */
				printf("Enter the number you have insert before %d : ", number);

				/* Scaning the new number to insert */
				scanf("%d", &key);

				/* If the link is Success it retuns 0 else it returns -1 */
				if ((ret = dl_insert_before(&head, &tail, number, key)) == LIST_EMPTY)
				{
					printf( "INFO : List Empty\n" );
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf( "INFO : Data not found\n" );
				}
				else 
				{
					printf( "INFO : Insert before Successfull\n" );
				}
				break;
			case 3:
				/* To insert the element after the number present in the list */
				printf("Enter the existing number : ");
				scanf("%d", &key);/* Scaning the existing number */
				printf("Enter the number you have to insert after %d : ", key);

				/* Scaning the new number to insert */
				scanf("%d", &number); 

				/* If the link is Success it will return 0 else it will return -1 */
				if ((ret = dl_insert_after(&head, &tail, number, key)) == LIST_EMPTY)
				{
					printf( "INFO : List Empty\n" );
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf( "INFO : Data not found\n" );
				}
				else 
				{
					printf( "INFO : Insert after Successfull\n" );
				}
				break;
			case 4:
				/* To delete the element present in the list */
				printf("Enter the element you have to delete : ");
				scanf("%d", &number); /* Scaning the number to delete */

				/* If the delete is completed it will return 0 else it will return -1 */
				if ((ret = dl_delete_element(&head, &tail, number)) == LIST_EMPTY)
				{
					printf( "INFO : List Empty\n" );
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf( "INFO : Data not found\n" );
				}
				else 
				{
					printf( "INFO : Delete element Successfull\n" );
				}
				break;
			case 5:
				/* Calling the function to print the list */
				print_list(head);
				break;
			case 6:
				return SUCCESS;

			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
