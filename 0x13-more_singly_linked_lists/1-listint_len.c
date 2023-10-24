#include "lists.h"

/**
 * listint_len - traverse the list
 * @h: head of the list
 * Return: number of list items traversed
*/

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
