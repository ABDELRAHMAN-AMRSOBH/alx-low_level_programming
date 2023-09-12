#include "main.h"

/**
 * print_last_digit - print last digit in n
 * @n: input
 * Return: last digit
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' - n % 10);
		return (-n % 10);
	}
	_putchar('0' + n % 10);
	return (n % 10);
}
