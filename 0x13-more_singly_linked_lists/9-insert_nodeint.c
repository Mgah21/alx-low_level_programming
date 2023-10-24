#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  this is insert   the code
 * @head: indcates the First node address.
 * @idx: indcate index number
 * @n:  display the Data of the new node.
 * Return: return  the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *q;
	unsigned int k = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	q = *head;
	for (; k < idx - 1 && q != NULL; k++)
		q = q->next;
	if (q == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = q->next;
	q->next = new_node;
	return (new_node);
}
