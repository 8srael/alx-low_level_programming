#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: head of a listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
