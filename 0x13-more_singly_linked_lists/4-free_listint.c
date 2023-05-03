#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *cmp;

	while (head)
	{
		cmp = head->next;
		free(head);
		head = cmp;
	}
}
