#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

#define SIZE 5

typedef struct Que
{
    unsigned int capacity;
	int front, rear, count;
		int *Que;
}Queue_t;

int enqueue(Queue_t *, int);
int dequeue(Queue_t *);
int print_queue(Queue_t *);
int IsQueueFull(Queue_t *q);
int IsQueueEmpty(Queue_t *q);

#endif