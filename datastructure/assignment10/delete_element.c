#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int e_data)
{ 
    if(*head == NULL)
     return LIST_EMPTY;
    Dlist *temp =*head;
    while(temp)
    {
        if(temp->data == e_data)
        {
            if((*head)->next == NULL)
            {
                free(*head);
                *head =NULL;
                *tail =NULL;
            }
            else if(temp == *head)
            {
                temp->next->prev = NULL;
                *head = temp->next;
                free(temp);

            }
            else if(temp == *tail)
            {
                temp->prev->next = NULL;
                *tail = temp->prev;
                free(temp);
            }
            else
            {
                temp->prev->next =temp->next;
                temp->next->prev =temp->prev;
                free(temp);
            }
            return SUCCESS;
        }
        temp =temp->next;
    }
 return DATA_NOT_FOUND;   

}
