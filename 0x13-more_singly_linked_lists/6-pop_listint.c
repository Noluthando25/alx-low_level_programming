#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
