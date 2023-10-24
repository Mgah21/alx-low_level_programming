#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint -  this function using for sum all  the data  in the list.
 * @head: location   the first of node of the list.
 * Return:  return Integer.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
