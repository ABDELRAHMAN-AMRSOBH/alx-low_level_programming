#include <stdio.h>

/**
 * main - Entry point
 * Description: Sum first 50 fib numbers
 * Return: 0
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	int i;

	for (i = 0; i < 49; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;

	}
	printf("%lu\n", fib1 + fib2);
}
