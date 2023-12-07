#include "lists.h"

/**
 * dlistint_len - dlistint
 * @h: start 
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t a;

  for (a = 0; h != NULL; a++)
    h = h->next;
  return (a);
}
