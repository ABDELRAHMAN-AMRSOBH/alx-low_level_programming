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

/**
 * exponential_search - implemention of exponential search
 * @array: list of numbers
 * @size: size of the list
 * @value: targeted value
 * Return: index if found else -1
*/

int exponential_search(int *array, size_t size, int value)
{
	int answer;
	int index = 0;

	if (!array)
		return (-1);
	if (array[index++] == value)
		return (0);
	while (index < (int) size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index = index * 2;
	}

	printf("Value found between indexes [%d] and [%d]\n"
	       , index / 2, (int) fmin(size - 1, index));
	answer = binary_search(&array[index / 2],
			       fmin(size - 1, index) - index / 2 + 1, value);
	return (answer == -1 ? -1 : answer + index / 2);
}
