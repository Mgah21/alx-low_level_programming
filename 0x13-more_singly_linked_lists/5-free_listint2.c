#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - used Frees two  a 9lists.
 * @head: loctaion  the first node  the  list.
 **/

void free_listint2(listint_t **head)
{
listint_t *p;

if (head == NULL)
return;
while (*head != NULL)
{
p = (*head)->next;
free(*head);
*head = p;
}
}
