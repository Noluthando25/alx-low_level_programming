#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: first node
 * @index: index of node
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cmp = head;

	while (cmp && n < index)
	{
		cmp = cmp->next;
		n++;
	}
	return (cmp ? cmp : NULL);
}
