#include "lists.h"

/**
 * reverse_listint - linked list
 * @head: the pointer is Char
 *
 * Return: return  the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}

	*head = p;

	return (*head);
}
