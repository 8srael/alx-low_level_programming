#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that function that returns the nth node
 *
 * @head: head of a listint_t list(doule pointer)
 * @index : index of an element in listint_t list
 *
 * Return: pointer of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);

	for (a = 0 ; a < index ; a++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}

	return (head);
}
