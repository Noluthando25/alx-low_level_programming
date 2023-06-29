#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
