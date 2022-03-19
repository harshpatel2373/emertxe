#include "sll.h"

int sl_delete_first(Slist **head)
{
    //checking if the list is empty
    if (*head == NULL)
        return FAILURE;

    //creating a local refrence
    Slist *temp = *head;

    //assigning head with second node address
    *head = temp -> link;

    //freeign the first node
    free(temp);

    return SUCCESS;
 
}
