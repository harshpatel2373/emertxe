#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    //checking list empty
    if(*head == NULL)
        return LIST_EMPTY;

    //assigning temp vraiables
    Slist *temp = *head, *temp1 = NULL;

    // creating a loop
    while(temp->link != NULL)
    {
        if(temp-> data == data)
            temp1 = temp;

        temp = temp->link;
    }
    if(temp1 == NULL)
        return DATA_NOT_FOUND;
    else
    {
        temp -> link = temp1;
        return SUCCESS;
    }
}
