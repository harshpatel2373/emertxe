#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    // allocate memory
    Slist *new = malloc(sizeof(Slist));

    //check if node is created
    if (new == NULL)
        return FAILURE;

    //assigning data to the node
    new -> data = data;

    //cheking if the list is empty
    if(head == NULL)
    {
        *head = new;
        new -> link = NULL;
        return SUCCESS;
    }
	//assigning link to the new
    Slist *temp = *head;
    *head = new;
    new -> link = temp;

    //returning sucess
    return SUCCESS;
}
