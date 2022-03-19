#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    int flag = 0;
    if(*head1 == NULL && *head2 == NULL)
    {
        return FAILURE;
    }
    else if(*head1 == NULL)
    {
        *head1 = *head2;
    }
    else
    {
        Slist *tempx =*head1;

        while(tempx->link)
        {
            tempx = tempx->link;
        }

        tempx->link = *head2;
       
    }

    //check is list has only one element
    if((*head1)->link == NULL)
    {
        return SUCCESS;
    }
    do
    {
        //variable initilization
        Slist *prev = NULL ,*current = *head1, *next = current->link;
        flag = 0;
        //when next not equal to null continue
        while(next != NULL)
        {
            //data compare
            if( current->data  >  next->data )
            {
                //set flag
                flag = 1;
                //whne prev != null then swap
                if( prev != NULL )
                {
                    Slist *temp = next->link;
                    prev->link = next;
                    next->link = current;
                    current->link = temp;
                }
                else
                {
                    //else swap by assigning next in head
                    Slist *temp = next->link;
                    *head1 = next;
                    next->link = current;
                    current->link = temp;
                }
                //increment point or point to next
                prev = next;
                next = current->link;
            }
            else
            {
                //increment point or point to next
                prev = current ;
                current = next ;
                next = next->link;
            }
        }

    }while(flag > 0);
    return  SUCCESS;

}
