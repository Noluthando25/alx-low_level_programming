#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node in linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *cmp = head;

	while (cmp)
	{
		a += cmp->n;
		cmp = cmp->next;
	}
	return (a);
}
