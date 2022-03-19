
#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    int i = 0, op1, op2, result;
 while (Prefix_exp[i])
 {
 if (isdigit(Prefix_exp[i]))
 	push(stk, Prefix_exp[i] - 48);
 else
{
 op1 = peek(stk);
 pop(stk);
 op2 = peek(stk);
 pop(stk);
 switch (Prefix_exp[i])
{
 case '+':
 result = op1 + op2;
 break;
 case '-':
 result = op1 - op2;
 break;
 case '*':
 result = op1 * op2;
 break;
 case '/':
 result = op1 / op2;
 break;
}
push(stk, result);
}
i++;
}
 return result;
}

