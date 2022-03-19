#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
    if(q->count == 0)
    {
        return FAILURE;
    }


    q->front =(q->front+1)%(q->capacity);

    if(q->front  > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    (q->count)--;
    return SUCCESS;
}
