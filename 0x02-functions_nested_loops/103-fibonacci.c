#include <stdio.h>

/**
 * main - Entry point
 * Description: Sum first 50 fib numbers
 * Return: 0
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, total = 0;

	while (fib2 < 4000000)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if (fib2 % 2 == 0)
			total += fib2;
	}
	printf("%lu\n", total);
	return (0);
}
