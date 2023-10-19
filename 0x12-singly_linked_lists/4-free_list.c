#include "lists.h"

/**
 * free_list - frees the entire list
 * @head: start of list
*/

void free_list(list_t *head)
{
	list_t *t = head;

	while (t->next)
	{
		t = t->next;
		if (head->str)
			free(head->str);
		free(head);
		head = t;
	}
	if (t->str)
		free(t->str);
	free(t);
}
