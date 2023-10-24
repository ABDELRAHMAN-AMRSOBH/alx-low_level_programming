#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: list
 * @idx: index
 * @n: num goes into new node
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *t = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;

	while (t && count < idx - 1)
	{
		t = t->next;
		count++;
	}
	if (count != idx - 1)
	{
		if (idx)
			return (NULL);
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = t->next;
		t->next = node;
	}
	return (node);
}
