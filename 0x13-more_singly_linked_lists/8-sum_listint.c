#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: head of a listint_t list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
