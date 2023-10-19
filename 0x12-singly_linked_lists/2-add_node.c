#include "lists.h"

/**
 * add_node - take list and add new node
 * @head: start of list
 * @str: info going to the node
 * Return: address of new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (*head);
}
