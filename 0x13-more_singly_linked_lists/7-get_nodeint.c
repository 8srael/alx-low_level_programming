#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that function that returns the nth node
 *
 * @head: head of a listint_t list(doule pointer)
 * @index : index of an element in listint_t list
 *
 * Return: the head node’s data.
 */

int listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);

	for (i = 0 ; i < index ; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}

	return (head);
}
