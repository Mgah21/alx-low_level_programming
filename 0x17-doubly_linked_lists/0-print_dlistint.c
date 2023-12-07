#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print list
 * @h: pointer to the start 
 *
 * Return: num
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t a;

  for (a = 0; h != NULL; a++)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
  return (a);
}
