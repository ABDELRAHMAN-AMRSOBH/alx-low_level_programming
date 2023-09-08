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
	int c, d, e;

	for (c = 0; c < 8; c++)
	{
		for (d = c + 1; d < 9; d++)
		{
			for (e = d + 1; e <= 9; e++)
			{
				putchar('0' + c);
				putchar('0' + d);
				putchar('0' + e);
				if (c == 7)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
