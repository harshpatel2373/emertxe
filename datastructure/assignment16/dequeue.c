#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    if(*front == NULL)
        return FAILURE;
    if(*front == *rear)
    {
        free(*front);
        *front =*rear= NULL;
        return SUCCESS;
    }
    *front = (*front)->link;
    free((*rear)->link);
    (*rear)->link =*front;
    return SUCCESS;
}
