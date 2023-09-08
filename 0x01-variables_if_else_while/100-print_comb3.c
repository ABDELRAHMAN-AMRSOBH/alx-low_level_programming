#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry Point
 * Description: print last digit
 * Return: always 0
*/

int main(void)
{
	int c, d;

	for (c = 0; c < 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar('0' + c);
			putchar('0' + d);
			if (c == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
