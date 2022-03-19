#include "main.h"

void push(Stack_t *stk, int data)
{
	++(stk -> top);
	stk -> stack_int[stk -> top] = data;
}

void pop(Stack_t *stk)
{
	if (stk -> top != -1)
		--(stk -> top);
}

int peek(Stack_t *stk)
{
	if (stk -> top != -1)
	{
		return stk -> stack_int[stk -> top];
	}
	return -1;
}

int priority(char opr)
{
    switch(opr)
    {
        case '+':
           case '-':
            return 1;
           case '*':
           case '/':
            return 2;
           default:
            return 0;
    }
}
