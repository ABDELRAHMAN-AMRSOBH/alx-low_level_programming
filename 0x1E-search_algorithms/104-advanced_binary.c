#include "search_algos.h"

/**
 * advanced_binary - implemention of advanced binary search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int middle = low + (high - low) / 2;
	int index = 0;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (index = 0; index <= high; index++)
		printf("%d%s", array[index], index == high ? "\n": ", ");
	if ((middle == 0 && array[middle] == value) ||
	    (value > array[middle - 1] && value == array[middle]))
		return (middle);
	if (array[middle] < value)
	{
		index = advanced_binary(&array[middle + 1], high - middle, value);
		return (index == -1 ? index : index + middle + 1);
	}
	return (advanced_binary(&array[low], middle - low + 1, value));
}
