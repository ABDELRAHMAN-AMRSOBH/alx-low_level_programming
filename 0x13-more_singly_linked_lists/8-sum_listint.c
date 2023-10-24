#include "lists.h"

/**
 * sum_listint - sum the n in nodes
 * @head: list of nodes
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
