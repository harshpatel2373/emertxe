#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    if(*head == NULL)
        return FAILURE;

    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return SUCCESS;
    }

    *tail = (*tail)->prev;
    free((*tail)->next);
    (*tail)->next = NULL;
    return SUCCESS;
}
