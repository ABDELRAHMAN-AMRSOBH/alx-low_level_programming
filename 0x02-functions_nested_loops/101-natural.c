#include <stdio.h>

/**
 * main - Entry point
 * Description: Sum all numbers divided by 3 or 5 below 1024
 * Return: 0
*/

int main(void)
{
	int result = 0, count;

	count = 1024 / 3;
	result += 3 * (count * (count + 1)) / 2;
	count = 1024 / 5;
	result += 5 * (count * (count + 1)) / 2;
	count = 1024 / 15;
	result -= 15 * (count * (count + 1)) / 2;
	printf("%d\n", result);
	return (0);
}
