#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if the value is not present or if the list is empty.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL)
	{
		return (NULL);
	}

	size_t jump = sqrt(size);
	listint_t *prev = NULL;
	listint_t *current = list;

	while (current->n < value)
	{
		prev = current;
		for (size_t i = 0; current->next != NULL && i < jump; i++)
		{
			current = currnet->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (prev == NULL || prev->n > value)
	{
		return (NULL);
	}
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
	{
		return (prev);
	}

	return (NULL);
}
