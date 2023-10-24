#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: beginning of linked list
 * Return: pointer to first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b = NULL;

	while (head && *head)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}
