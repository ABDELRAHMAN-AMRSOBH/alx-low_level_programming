#include "lists.h"

/**
 * print_listint - traverse the list and print its str
 * @h: head of the list
 * Return: number of list items traversed
*/

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (t)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
