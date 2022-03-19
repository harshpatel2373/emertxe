#include "stack.h"

int Pop(Stack_t **top)
{
    //checking if the list is empty
    if (*top == NULL)
        return FAILURE;

    //creating a local refrence
    Stack_t *temp = *top;

    //assigning head with second node address
    *top = temp -> link;

    //freeign the first node
    free(temp);

    return SUCCESS;
	

}
