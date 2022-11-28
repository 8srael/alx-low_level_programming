#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - function
 * @h: Pointer to a linked list head.
 * Return: number of elements in a linked list_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_all_elements = 0;

	while (h)
	{
		++number_of_all_elements;
		h = h->next;
	}
	return (number_of_all_elements);
}
