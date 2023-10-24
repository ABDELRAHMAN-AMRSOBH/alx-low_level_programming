#include "lists.h"

/**
 * get_nodeint_at_index - return address of node[index]
 * @head: list
 * @index: index of node
 * Return: pointer to node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && index != count)
	{
		head = head->next;
		count++;
	}
	return (head);
}
