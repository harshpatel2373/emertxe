#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int data, int e_data)
{
    if(*head == NULL)
        return LIST_EMPTY;
    Dlist *temp = *head;

    while(temp)
    {
        if(temp->data == e_data)
        {
            Dlist *new = malloc(sizeof(Dlist));
            if(new == NULL)
                return FAILURE;
            new->data =data;
            if(temp == *tail)
            {
                (*tail)->next = new;
                new->prev = *tail;
                new->next =NULL;
                *tail = new;
            }
            else
            {   
                new->next = temp;
                new->prev = temp->prev;
                temp->prev->next =new;
                temp->prev =new;
            }
            return SUCCESS;
        }
        temp =temp->next;
    }
    return DATA_NOT_FOUND;

}
