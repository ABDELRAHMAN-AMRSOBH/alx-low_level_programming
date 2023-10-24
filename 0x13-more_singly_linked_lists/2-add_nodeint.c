#include "lists.h"

/**
 * add_nodeint - add node to linked list at the start
 * @head: start of list
 * @n: number goes into list
 * Return: address of new node or null if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = *head;
	*head = new;
	return (new);
}
