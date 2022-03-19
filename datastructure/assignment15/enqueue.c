#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
	/* Cheking the queue is full or not */
//	if (IsQueueFull(q) == SUCCESS)
//	{
//		return FAILURE;
//	}

    //q->count = q->count+1;
    if(q->count == (q->capacity))
    {
        return FAILURE;
    }
    if(q->front == -1)
    {
        q->front =q->front +1;
    }
  

    q->rear = (q->rear+1)%(q->capacity);
    q->Que[q->rear] = data;
    q->count = q->count+1;
    return SUCCESS;

}
