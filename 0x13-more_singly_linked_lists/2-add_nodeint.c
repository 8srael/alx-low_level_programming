#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 *
 * @head : head of a listint_t list
 * @n : an integer
 *
 * Return: number of elements in a linked list_t list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;

	add->next = *head;

	*head = add;

	return (add);
}
