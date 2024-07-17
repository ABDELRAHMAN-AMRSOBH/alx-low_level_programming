#include "search_algos.h"

/**
 * jump_list - implemention of advanced jump search
 * @list: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *save = list;
	int step = sqrt(size);
	int index = 0;
	int moved = 0;

	while (index < (int) size - 1)
	{
		save = list;
		moved = 0;
		while (list->next && moved < step)
		{
			moved++;
			list = list->next;
		}
		printf("Value checked at index [%d] = [%d]\n", (int) list->index, list->n);
		if (list->n >= value || list->index % step > 0)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int) save->index, (int) list->index);
			while (moved >= 0)
			{
				printf("Value checked at index [%d] = [%d]\n", (int) save->index, save->n);
				if (save->n == value)
					return (save);
				moved--;
				save = save->next;
			}
			break;
		}
		index = list->index;
	}
	return (NULL);
}
