#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define SIZE 5 

typedef struct stack
{
	int stack[SIZE];
	int top;
}Stack_t;

int Push(Stack_t *, int);
int Pop(Stack_t *);
int Peek(Stack_t *);
int Peep(Stack_t *);

#endif
