#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index of linked list
 * @head: head of linked list
 * @index: index of element to be deleted
 * Return: 1 upon success, -1 fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *t = *head, *c;

	if (t && !index)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	while (t)
	{
		if (count + 1 == index)
		{
			c = t->next;
			if (c)
			{
				t->next = c->next;
				free(c);
				return (1);
			}
		}
		t = t->next;
		count++;
	}
	return (-1);
}
