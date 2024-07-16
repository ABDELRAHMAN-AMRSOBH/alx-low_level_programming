#include "search_algos.h"

/**
 * interpolation_search - implemention of interpolation search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	int pos;
	int low = 0, high = size - 1;

	while (low < high)
	{
		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));
		if (pos >= (int) size)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
