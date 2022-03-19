#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    //Allocating memory to the node
    Slist *new = malloc(sizeof(Slist));

   //checking if the node is created or not
    if(new == NULL)
        return FAILURE;

    // assigining data and link to the node
    new -> data = data;
    new -> link = NULL;

    //checking if the list is empty and assigning new to head
    if(*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }

    // assigning head to temprory variable
    Slist *temp = *head;
   
    //traversing till last node
    while(temp -> link != NULL)
    {
        temp = temp -> link;
    }

    //establishing link between first and last node
    temp -> link = new;

    return SUCCESS;
}


