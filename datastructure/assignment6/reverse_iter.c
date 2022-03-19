#include "sll.h"

/* Function to reverse the given single linked list */
int reverse(Slist **head) 
{ 
    if(*head ==NULL)
        return FAILURE;
    Slist *prev=NULL,*cur=*head,*next;
   while(cur)
   {
       next =cur->link;
       cur->link =prev;
       prev = cur;
       cur = next;
   }
    *head =prev;
    return SUCCESS;
} 
