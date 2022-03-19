#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int n, int *n_value) 
{ 
    //checking if list is empty
    if(head == NULL)
    {
        return LIST_EMPTY;
    }

    // creating 2 temp ponters
    Slist *temp = head;
    Slist *temp1 = head;

    //advancing one temp pointer till n value
    for(int i = 0; i < n; i++)
    {
        if(temp == NULL)
        {
            return FAILURE;
        }

        temp = temp->link;
    }

    // advancing both temp till temp reaches null
    while(temp != NULL)
    {
        temp = temp -> link;
        temp1 = temp1 -> link;
    }

    *n_value = n;
    return temp1-> data;
} 
