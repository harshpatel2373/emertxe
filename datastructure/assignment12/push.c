#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    // allocate memory
    Stack_t *new = malloc(sizeof(Stack_t));

    //check if node is created
    if (new == NULL)
        return FAILURE;

    //assigning data to the node
    new -> data = data;

    //cheking if the list is empty
    if(*top == NULL)
    {
        *top = new;
        (*top) -> link = NULL;
        return SUCCESS;
    }

	//assigning link to the new
    Stack_t *temp = *top;
    *top = new;
    new -> link = temp;

    //returning sucess
    return SUCCESS;

}
