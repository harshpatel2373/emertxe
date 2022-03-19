#include "main.h"

int priority(char opr)
{
    switch(opr)
    {
        case '+':
            return 2;
           case '-':
            return 2;
           case '*':
            return 5;
           case '/':
            return 5;
           case '(':
            return 0;
           case ')':
            return 0;
           default:
            return 0;
	}

}

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

