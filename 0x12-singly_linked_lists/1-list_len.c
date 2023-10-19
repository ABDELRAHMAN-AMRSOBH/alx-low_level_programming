#include "lists.h"

/**
 * list_len - count the nodes in h
 * @h: list
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t c = 0;
	const list_t *t = h;

	while (t)
	{
		c++;
		t = t->next;
	}
	return (c);
}
