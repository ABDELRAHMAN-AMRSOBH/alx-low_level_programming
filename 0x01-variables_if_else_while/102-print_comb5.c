#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: assign random number and print positive if positive otherwice
 *              prints negative
 *
 * Return: Always 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
