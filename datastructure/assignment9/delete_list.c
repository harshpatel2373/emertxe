#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    if(*head == NULL)
        return FAILURE;

    Dlist *temp = *head;

    while(temp)
    {
        

        if(*head == *tail)
        {
            free(*head);
            *head = NULL;
            *tail = NULL;
            return SUCCESS;
        }

        *head =(*head)->next;
        free((*head)->prev);
        (*head)->prev =NULL;
        temp = temp->next;
    }
    return SUCCESS;

}
