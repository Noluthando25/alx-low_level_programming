#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to first element
 * @n: data
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *cmp = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (cmp->next)
		cmp = cmp->next;
	cmp->next = i;
	return (i);
}
