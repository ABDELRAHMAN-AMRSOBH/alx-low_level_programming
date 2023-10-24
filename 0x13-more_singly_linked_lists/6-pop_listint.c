#include "lists.h"

/**
 * pop_listint - give n with head and free node
 * @head: list
 * Return: n of node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int value = 0;

	if (head && *head)
	{
		node = *node;
		*head = node->next;
		value = node->n;
		free(node);
	}
	return (value);
}
