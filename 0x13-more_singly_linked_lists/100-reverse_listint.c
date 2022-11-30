#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t list
 *
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *next;

	if (!head || !*head)
		return (NULL);

	if (!((*head)->next))
		return (*head);

	back = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;

	return (*head);
}
