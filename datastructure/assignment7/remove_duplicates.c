#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{

    if(*head == NULL)
        return FAILURE;

    if((*head)->link == NULL)
        return SUCCESS;

    Slist *temp =*head, *temp2, *next, *prev;

    while(temp)
    {
        prev = temp;
        temp2 = temp->link;
        while(temp2)
        {
            int once = 1;
            if((temp->data) == (temp2->data))
            {
                next=temp2->link;
                temp2->link = NULL;
                prev->link = next;
                free(temp2);     
                temp2 = next;
                once = 0;
            }
         
            //prev = prev->link;
            if(temp2 != NULL && once == 1)
            {
                once = 1;
                prev = prev->link;
                temp2 =temp2->link; 
            }
        }         
        
        temp =temp->link;
    }
}


