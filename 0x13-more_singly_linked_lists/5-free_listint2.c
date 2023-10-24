#include "lists.h"

/**
 * free_listint2 - free list
 * @head: the list
*/

void free_listint2(listint_t **head)
{
	listint_t *c;

	while (head && *head)
	{
		c = *head;
		*head = c->next;
		free(c);
	}

}
