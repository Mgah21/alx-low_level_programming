#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - search   node in  list.
 * @head: Add  of first node in  list.
 * @index: insert the index
 * Return: return the Node loctaion
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u = 0;

	if (head == NULL)
		return (NULL);
	for (u = 0; u < index; u++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
