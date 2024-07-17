#include "search_algos.h"

/**
 * linear_skip - implemention of linear skip search
 * @list: list of numbers
 * @value: targeted value
 * Return: address of node or null
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *counting = list;

	if (!list)
		return (NULL);
	while (list->express)
	{
		printf("Value checked at index [%d] = [%d]\n"
		       , (int) list->express->index, list->express->n);
		if (list->express->n >= value)
		{
			break;
		}
		list = list->express;
	}
	counting = list->express ? list->express : list;
	while (!list->express && counting->next)
		counting = counting->next;
	printf("Value found between indexes [%d] and [%d]\n"
		, (int) list->index, (int) counting->index);
	while (list && list->index <= counting->index)
	{
		printf("Value checked at index [%d] = [%d]\n"
		       , (int) list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
