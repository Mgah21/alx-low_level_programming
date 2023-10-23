#include "lists.h"

/**
 * listint_len - this list worked  Calculate the number of the  elements.
 * @h: indcate the is a Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
const listint_t *tem;
unsigned int center = 0;

tem = h;
while (tem)
{
center++;
tem = tem->next;
}
return (center);
}
