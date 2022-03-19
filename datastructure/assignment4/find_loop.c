#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
    //checking list empty
    if(head == NULL)
        return LIST_EMPTY;

    //assigning temp vraiable
    Slist *temp = head;

    //logic for finding loop
    if(temp->link->link == NULL || temp->link == NULL)
        return DATA_NOT_FOUND;
    else
    {
        Slist *temp1 = head->link->link;

        while(temp1)
        {
            if(temp == temp1)
               return SUCCESS;

            temp = temp -> link;

            if(temp1->link != NULL)
                temp1= temp1->link->link;
            else
                temp1 = NULL;

        }
        return DATA_NOT_FOUND;
    }

}
