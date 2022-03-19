#include "sll.h"

int sl_sort(Slist **head)
{
     int flag = 0;
    //check is list empty or not
    if(*head == NULL)
    {
        return LIST_EMPTY;
    }
    //check is list has only one element
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }
    do
    {
        //variable initilization
        Slist *prev = NULL ,*current = *head, *next = current->link;
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
                    *head = next;
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
