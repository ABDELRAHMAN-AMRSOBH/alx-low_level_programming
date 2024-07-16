#include "search_algos.h"

/**
 * binary_search - implemention of binary search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int middle = left + (right - left) / 2;
	int index = 0;

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		index = left;
		while (index <= right)
		{
			if (index == right)
				printf("%d\n", array[index]);
			else
				printf("%d, ", array[index]);
			index++;
		}
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
