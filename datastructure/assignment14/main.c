#include "main.h"
#include <string.h>
void strrev(char *string)
{
	char *str;
	int i = 0, j = strlen(string);
	for (; i < j / 2 ; i++)
	{
		char temp = string[j - i - 1];
		string[j - i - 1] = string[i];
		string[i] = temp;
	}
}
int main()
{
	char Infix_exp[50], Prefix_exp[50], ch;
	int choice, result;
	Stack_t stk;
	stk.top = -1;

	printf("Enter the Infix expression : ");
	scanf("%s", Infix_exp);
	strrev(Infix_exp);

	Infix_Prefix_conversion(Infix_exp, Prefix_exp, &stk);
	strrev(Prefix_exp);
	printf("PreFix expression : %s\n", Prefix_exp);
	stk.top = -1;
	strrev(Prefix_exp);
	result = Prefix_Eval(Prefix_exp, &stk);
	printf("\nResult : %d\n", result);
	return 0;
}
