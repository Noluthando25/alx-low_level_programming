#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		new_node->prev = temp->prev;
		new_node->next = temp;
		if (temp->prev != NULL)
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
