#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - new node at the beginning of a list_t list
 *
 * @head: head of a list_t list.
 * @str: value to insert into element.
 *
 * Return: number of elements in a linked list_t list.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = strlen(str);
	add->next = *head;

	*head = add;

	return (add);
}
