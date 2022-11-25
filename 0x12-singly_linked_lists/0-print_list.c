#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all of the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		j++;
		h = h->next;
	}
	return (j);
}
