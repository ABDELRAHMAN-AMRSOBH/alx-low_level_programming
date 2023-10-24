#include "lists.h"

/**
 * add_node_end - take list and add new node
 * @head: start of list
 * @str: info going to the node
 * Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (str)
	{
		new->len = strlen(str);
		new->str = strdup(str);
	}
	else
	{
		new->len = 0;
		new->str = NULL;
	}
	new->next = NULL;
	if (*head)
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
		return (t->next);
	}
	*head = new;
	return (*head);
}
