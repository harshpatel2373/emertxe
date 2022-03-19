#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    if(*head == NULL)
        return FAILURE;

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
    return SUCCESS;

}
