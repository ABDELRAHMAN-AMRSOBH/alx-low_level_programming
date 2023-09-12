#include "main.h"

/**
 * print_sign - print sign
 * @n: just a number
 * Return:	+1 if greater than _0
 *		_0 if equal to _____0
 *		-1 if less than ____0
*/

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
