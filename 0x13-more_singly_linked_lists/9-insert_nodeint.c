#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to first node
 * @idx: index
 * @n: data to insert
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a;
	listint_t *cmp = *head;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);

			a->n = n;
			a->next = NULL;

			if (idx == 0)
			{
			a->next = *head;
			*head = a;
			return (a);
			}
			for (i = 0; cmp && i < idx; i++)
			{
				if (i == idx - 1)
				{
					a->next = cmp->next;
					cmp->next = a;
					return (a);
				}
				else
					cmp = cmp->next;
			}
			return (NULL);
}

