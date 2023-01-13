#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 *
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
		h = h->next;

	return (length);
}
