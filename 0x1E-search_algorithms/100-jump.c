#include "search_algos.h"

/**
 * jump_search - implemention of jump search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int jump_search(int *array, size_t size, int value)
{
	int index = 0;
	int step = sqrt(size);

	while (index < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (index + step >= (int) size || array[index + step] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", index, index + step);
			while (index < (int) size)
			{
				printf("Value checked array[%d] = [%d]\n", index, array[index]);
				if (array[index] == value)
					return (index);
				index++;
			}
			return (-1);
		}
		index += step;
	}
	return (-1);
}
