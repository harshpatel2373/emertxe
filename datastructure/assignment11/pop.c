#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{
    if(s->top == -1)
        return FAILURE;
    s->top =(s->top) -1;
    return SUCCESS;    
	
}
