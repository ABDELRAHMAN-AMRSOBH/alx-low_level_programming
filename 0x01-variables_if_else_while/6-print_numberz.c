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
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);
}
