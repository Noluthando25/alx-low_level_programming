#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *cmp;

	if (head == NULL)
		return;

	while (*head)
	{
		cmp = (*head)->next;
		free(*head);
		*head = cmp;
	}
	*head = NULL;
}
