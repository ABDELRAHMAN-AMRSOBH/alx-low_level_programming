#include <stdio.h>

/**
 * main - Entry point
 * Description: Sum all numbers divided by 3 or 5 below 1024
 * Return: 0
*/

int main(void)
{
	int result = 0, count = 0;

	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
			result += count;
		count++;
	}
	printf("%d\n", result);
	return (0);
}
