#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - used for Delete the first element of  singly linked list.
 * @head: this is indcate Pointer to the  list.
 * Return: return Integer if successfuly.
 **/

int pop_listint(listint_t **head)
{
listint_t *h;
int mda;
if (*head == NULL)
return (0);
h = *head;
*head = h->next;
mda = h->n;
free(h);
return (mda);
}
