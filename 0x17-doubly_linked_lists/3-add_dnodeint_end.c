#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: first integer
 * @n: integer
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)) *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next
		new->prev = node;
		node->next = new;
	}
	return (new);
}
