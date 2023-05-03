#include "lists.h"

/**
 * pop_listint - eletes the head node of a listint_t linked list
 * @head: pointer to first element
 * Return: data inside the elements
 */

int pop_listint(listint_t **head)
{
	listint_t *cmp;
	int a;

	if (!head || !head)
		return (0);
	a = (*head)->n;
	cmp = (*head)->next;
	free(*head);
	*head = cmp;

	return (a);
}
