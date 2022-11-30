#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 *
 * @head: head of a listint_t list
 * @idx : index of the node
 * @n: new node value
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *temp, *new;

	if (!head)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (j = 0; i < idx - 1 && temp != NULL; j++)
			temp = temp->next;

		if (!temp)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
