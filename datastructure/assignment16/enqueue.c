#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    Queue_t *new = malloc(sizeof(Queue_t));
    if(new == NULL)
        return FAILURE;

    new->data = data;
    new->link =NULL;

    if(*front == NULL)
    {
        *front = new;
        *rear = new;
        new->link = new;
    }
    else
    {
       (*rear)->link = new;
       new->link = *front;
      *rear =new;
    }

    new->link =*front;
return SUCCESS;
}
