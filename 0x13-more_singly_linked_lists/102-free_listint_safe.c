#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - hat frees a listint_t list.
 * @h: head
 * Return: NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;

		if (current == *h)
			break;
	}
	*h = NULL;
	return (count);
}
