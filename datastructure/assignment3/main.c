
#include "sll.h"

int main()
{
	char check_char;
	int option, number, key, n_value;


	Slist *head = NULL; //initialize the header to NULL


	printf("1. Insert at last\n2. Find Mid\n3. Find Nth last\n4. Print list \n5. Exit\nEnter the Option : ");
	while (1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &number);

				/*insert_at_last function call*/
				if (insert_at_last(&head, number) == FAILURE) //pass by reference
				{
					printf("INFO : Insert last failed\n");
				}
				break;

			case 2:{
					   int mid;
					   if ((find_mid(head, &mid)) == LIST_EMPTY)
					   {
						   printf("INFO : List is empty\n");
					   }
					   else 
					   {
						   printf("Middle element is %d\n", mid);
					   }
				   }
				   break;
			case 3:
				   printf("Enter the Number to find the last : ");
				   scanf("%d", &number);
				   if ((key = find_nth_last(head, number, &n_value)) == FAILURE)
				   {
					   printf("INFO : Position not found\n");
				   }
				   else if (key == LIST_EMPTY)
				   {
				        printf("INFO : List is empty");
				   }
				   else 
				   {
					   printf("%dth last is %d\n", n_value, key);
				   }
				   break;
			case 4:
				   /* print list function call*/
				   print_list(head);
				   break;
			case 5:
				   return SUCCESS;
			default:
				   printf("Invalid Option\n");
		}


	}

	return SUCCESS;
}
