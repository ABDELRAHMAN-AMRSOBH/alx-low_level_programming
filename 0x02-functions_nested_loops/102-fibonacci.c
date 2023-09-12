#include <stdio.h>

/**
 * main - Entry point
 * Description: Sum first 50 fib numbers
 * Return: 0
*/

int main(void)
{
	long long arr[2] = {1, 2};
	int i = 0;

	for (; i < 49; i++)
	{
		printf("%ld, ", arr[i % 2]);
		arr[i % 2] += arr[(i + 1) % 2];
	}
	printf("%ld\n", arr[i % 2]);
}
