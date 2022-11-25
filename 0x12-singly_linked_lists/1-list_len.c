#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - shows 
 * @h: Pointer to a linked list head.
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int number_of_all_elements;

	while (h)
	{
		++number_of_all_elements;
		h = h->next;
	}
	return (number_of_all_elements);
}
