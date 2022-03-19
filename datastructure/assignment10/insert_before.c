#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int e_data, int data)
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
            new->data = data;

            if(temp == *head)
            {
                new->next = *head;
                new->prev =NULL;
                *head = new;
                new->next->prev =new;
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
        temp=temp->next;
    }
    return DATA_NOT_FOUND;

}
