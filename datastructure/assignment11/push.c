#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
    int capcity = sizeof(s->stack)/sizeof(int);

	/* Cheking the array size exceed or not */
    if(s->top == (capcity -1))
        return FAILURE;

    s->top = (s->top)+1;
    s->stack[s->top] = element;
    return SUCCESS;


}
