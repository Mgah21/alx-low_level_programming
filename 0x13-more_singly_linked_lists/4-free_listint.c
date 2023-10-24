#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - inserted into a list.
 * @head: location  the one  node of  list.
 **/

void free_listint(listint_t *head)
{
	listint_t *n, *m;

	n = head;
	while (n != NULL)
	{
		m = n->next;
		free(n);
		n = m;
	}
}

