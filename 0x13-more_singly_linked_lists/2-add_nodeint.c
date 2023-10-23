#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the started of a list.
 * @head: location of a first node of the list.
 * @n: indcate intoInteger to insert into a new node.
 * Return: location  of a new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tem;

tem = malloc(sizeof(listint_t));
if (tem == NULL)
return (NULL);
tem->n = n;
tem->next = *head;
*head = tem;
return (*head);
}
