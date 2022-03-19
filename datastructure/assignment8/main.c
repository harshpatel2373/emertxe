#include "sll.h"

int main()
{
	//variable declaration
	Slist *head1 = NULL;
	Slist *head2 = NULL;
	int choice, num, temp = 0, ret;
	char option;

	printf("1. Insert at  List 1\n2. Insert at list 2\n3. Print list\n4. Sorted merge\n5. Exit\nEnter your choice: ");
	while (1)
	{
		//call function display menu
		scanf("%d", &choice);

		switch (choice)
		{

			//insert element at last
			case 1:
				printf("Enter the data to be inserted at list 1 : ");
				scanf("%d", &num);

				if (insert_at_last(&head1, num) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 2:

				printf("Enter the data to be inserted at list 2 : ");
				scanf("%d", &num);

				if (insert_at_last(&head2, num) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 3:
				if (temp == 0)
				{
					printf("\nList 1 -> ");
					print_list(head1); // print list_1
					printf("\n\nList 2 -> ");
					print_list(head2); // print list_2
					break;
				}
				else
					print_list(head1);
				break;

			case 4:
				ret = sorted_merge(&head1, &head2); // Call sorted merge function to merge and sort the elements of both lists

				if (ret == SUCCESS)
					printf("INFO : Sorted merge Successfull\n");
				else
					printf("INFO : Both list are Empty\n");

				temp = 1;
				break;

			case 5 :
				return SUCCESS;

			default:
				printf("\nPlease type the correct option\n");

		}

	}

	return 0;
}		
