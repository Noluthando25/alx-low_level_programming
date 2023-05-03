#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to first element
 * @index: node to delete
 * Return: 1, or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cmp = *head;
	listint_t *a = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!cmp || !(cmp->next))
			return (-1);
		cmp = cmp->next;
		i++;
	}
	a = cmp->next;
	cmp->next = a->next;
	free(a);
	return (1);
}
