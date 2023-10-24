#include "lists.h"

/**
 * add_nodeint_end - add node to linked list at the end
 * @head: start of list
 * @n: number goes into list
 * Return: address of new node or null if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *t;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}
	else
		*head = new;
	return (new);
}
