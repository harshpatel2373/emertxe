#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
    if(s->top == -1)
        return FAILURE;
    return s->stack[s->top];
	
}
