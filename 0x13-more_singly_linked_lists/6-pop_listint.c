#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 *
 * @head: head of a listint_t list(doule pointer)
 *
 * Return: the head node’s data.
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int a;

	if (!head || !*head)
		return (0);

	first = *head;
	*head = first->next;

	a = first->n;
	free(first);

	return (a);
}
