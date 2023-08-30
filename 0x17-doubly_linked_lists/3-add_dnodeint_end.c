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
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
