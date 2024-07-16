#include "search_algos.h"

/**
 * linear_search - implemention of linear search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
