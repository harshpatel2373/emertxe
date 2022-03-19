#include "stack.h"

int Peek(Stack_t **top)
{
    if(*top == NULL)
        return FAILURE;
    return (*top)->data;

}
