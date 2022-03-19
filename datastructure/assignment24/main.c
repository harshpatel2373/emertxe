#include "tree.h"

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;

	printf("1. insert BST\n2. in order Traversal\n3. pre order Traversal\n4. post order Traversal\n5. BST Search\n6. Find minimum\n7. Find maximum\n8. Exit\n");	
		/* Asking the user to choose the operation */
	printf("Enter the option:\n");
	while (1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				/* Reading the data from the user */
				printf("Enter the data to insert into the BST : ");
				scanf("%d", &data);

				/* Calling the function to insert the element */
				if ((result = insert_into_BST(&root, data)) == DUPLICATE)
				{
					printf("INFO : Duplicate found\n");
				}
				else if (result == FAILURE)
				{
					printf("INFO : Node not created\n");
				}
				break;
			case 2:
				/* Function to Printing the data in in-order form */
				inorder(root);
				printf("\n");
				break;

			case 3:
				/* Function to Printing the data in pre-order form */
				preorder(root);
				printf("\n");
				break;
			case 4:
				/* Function to Printing the data in post-order form */
				postorder(root);
				printf("\n");
				break;
			
			case 5:
				printf("Enter the element to be searched: ");
				scanf("%d", &data);
				result = search_BST(root, data);
				if (result == NOELEMENT)
				{
					printf("INFO : Data not found\n");
				}
				else if (result == FAILURE)
				{
				    printf("INFO : Tree is empty\n");
				}
				else
				{
					printf("INFO : Data found\n");
				}

				break;
			case 6: 
				result = findmin(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Minimum value in the tree is %d\n", result);	
				}
				break;
			case 7: 
				result = findmax(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Maximum value in the tree is %d\n", result);	
				}	
				break;	
			case 8:
			    return SUCCESS;
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}
