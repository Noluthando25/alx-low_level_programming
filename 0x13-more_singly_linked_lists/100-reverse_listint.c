#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer to first node
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = next;
	}
	*head = a;
	return (*head);
}
