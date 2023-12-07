#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert
 * @h: pointer
 * @idx: index
 * @n: data
 *
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *current;
unsigned int u;

if (h == NULL)
return (NULL);
if (idx != 0)
{
current = *h;
for (u = 0; u < idx - 1 && current != NULL; u++)
current = current->next;
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}
else
{
new->prev = current;
next = current->next;
current->next = new;
}
new->next = next;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
