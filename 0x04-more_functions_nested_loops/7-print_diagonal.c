#include "main.h"

/**
 * print_diagonal - prints diagonal using \
 * @n: size
*/

void print_diagonal(int n)
{
	int i = 0, count;

	while (n-- > 0)
	{
		count = i;
		while (count-- > 0)
			_putchar(' ');
		_putchar('\');
		if (n)
			_putchar('\n\);
		i++;
	}
	_putchar('\n');
}
