#include "lists.h"

/**
 * print_list - traverse the list and print its str
 * @h: head of the list
 * Return: number of list items traversed
*/

size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *t = h;

	while (t)
	{
		c++;
		printf("[%d] %s\n", t->len, t->str ? t->str : "(nil)");
		t = t->next;
	}
	return (c);
}
