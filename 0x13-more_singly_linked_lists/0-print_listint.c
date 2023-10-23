#include "lists.h"
#include <stdio.h>

/**
 * print_listint - indcate for Print elements of a singly linked list.
 * @h: indcate the  Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
const listint_t *tem;
unsigned int center = 0;

tem = h;
while (tem)
{
printf("%d\n", tem->n);
center++;
tem = tem->next;
}
return (center);
}
