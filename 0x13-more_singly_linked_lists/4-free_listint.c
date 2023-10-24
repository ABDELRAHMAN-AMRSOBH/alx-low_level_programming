#include "lists.h"

/**
 * free_listint - free list
 * @head: the list
*/

void free_listint(listint_t *head)
{
	listint_t *c = head;

	while (head)
	{
		c = head->next;
		free(head);
		head = c;
	}
}
